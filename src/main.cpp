#include <iostream>
#include <SFML/Graphics.hpp>

#include "model/space2d.hpp"


void drawSpace2d(sf::RenderWindow &window, Space2d &space);

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "NHE Physics Sim");
    window.setFramerateLimit(0);
    
    sf::Vector2i mousePos;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            if(sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
                if (event.type == sf::Event::MouseMoved)
                {
                    std::cout << "old mouse x: " << mousePos.x << std::endl;
                    std::cout << "old mouse y: " << mousePos.y << std::endl;
                    
                    std::cout << "new mouse x: " << event.mouseMove.x << std::endl;
                    std::cout << "new mouse y: " << event.mouseMove.y << std::endl;
                    sf::Vector2i newMousePos = sf::Vector2i(event.mouseMove.x, event.mouseMove.y);

                    sf::Vector2i difMousePos = newMousePos - mousePos;

                    std::cout << "Mouse movement: " << difMousePos.x << ", " << difMousePos.y << std::endl;
                }

                mousePos = sf::Mouse::getPosition(window);
            }
        }

        

        window.clear();
        
        //drawFunctions
        //drawSpace2d(window, defaultSpace);

        window.display();
    }

    return 0;
}

/*
void drawSpace2d(sf::RenderWindow &window, Space2d &space) {
    sf::RenderTexture renderTexture;
    if (!renderTexture.create(space.width * space.pixelsPerMeter, space.height * space.pixelsPerMeter))
    {
        // error...
    }
    renderTexture.clear();

    int nLinesH = space.height / space.gridSize;
    int nLinesV = space.width / space.gridSize;

    for(int i = 0; i <= nLinesH; i++) {
        sf::Vertex line[] =
        {
            sf::Vertex(sf::Vector2f(0, i * space.gridSize * space.pixelsPerMeter)),
            sf::Vertex(sf::Vector2f(space.height * space.pixelsPerMeter, i * space.gridSize * space.pixelsPerMeter))
        };

        renderTexture.draw(line, 2, sf::Lines);
    }

    for(int i = 0; i <= nLinesV; i++) {
        sf::Vertex line[] =
        {
            sf::Vertex(sf::Vector2f(i * space.gridSize * space.pixelsPerMeter, 0)),
            sf::Vertex(sf::Vector2f(i * space.gridSize * space.pixelsPerMeter, space.width * space.pixelsPerMeter))
        };

        renderTexture.draw(line, 2, sf::Lines);
    }

    // get the target texture (where the stuff has been drawn)
    const sf::Texture& texture = renderTexture.getTexture();

    // draw it to the window
    sf::Sprite sprite(texture);
    sprite.setPosition(space.pivotX, space.pivotY);
    window.draw(sprite);
}
*/
