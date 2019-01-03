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
    Texture textureBackground;
    Sprite spriteBackground;
    
    RenderWindow window(VideoMode(1024, 720), "Timber", Style::Fullscreen);
    textureBackground.loadFromFile("/Users/marcelochaves95/Projects/timber-game/Timber/Graphics/background.png");
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
