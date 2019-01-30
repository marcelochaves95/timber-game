//
//  main.cpp
//  Timber
//
//  Created by Marcelo Chaves on 03/01/19.
//  Copyright © 2019 Marcelo Chaves. All rights reserved.
//

#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
    VideoMode vm (1280, 720);
    
    RenderWindow window(vm, "Timber");
    View view(sf::FloatRect(0, 0, 1280, 720));
    window.setView(view);
    
    Texture textureBackground;
    
    textureBackground.loadFromFile("/Users/marcelochaves95/Projects/timber-game/Timber/Graphics/background.png");
    
    Sprite spriteBackground;
    spriteBackground.setTexture(textureBackground);
    
    spriteBackground.setPosition(0, 0);
    
    while (window.isOpen())
    {
        
        if (Keyboard::isKeyPressed(Keyboard::Escape))
        {
            window.close();
        }
        
        window.clear();
        window.draw(spriteBackground);
        window.display();
    }
    
    return 0;
}
