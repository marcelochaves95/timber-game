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
    VideoMode vm (1280, 800);
    
    RenderWindow window(vm, "Timber");
    View view(sf::FloatRect(0, 0, 1280, 800));
    window.setView(view);
    
    Texture textureBackground;
    
    // Load a graphic into the texture
    textureBackground.loadFromFile("/Users/marcelochaves95/Projects/timber-game/Timber/Graphics/background.png");
    
    // Create a sprite
    Sprite spriteBackground;
    
    // Attach the texture to the sprite
    spriteBackground.setTexture(textureBackground);
    
    // Set the spriteBackground to cover the screen
    spriteBackground.setPosition(0, 0);
    
    // Make a tree sprite
    Texture textureTree;
    textureTree.loadFromFile("/Users/marcelochaves95/Projects/timber-game/Timber/Graphics/tree.png");
    Sprite spriteTree;
    spriteTree.setTexture(textureTree);
    spriteTree.setPosition(810, 0);
    
    // Prepare the bee
    Texture textureBee;
    textureBee.loadFromFile("/Users/marcelochaves95/Projects/timber-game/Timber/Graphics/bee.png");
    Sprite spriteBee;
    spriteBee.setTexture(textureBee);
    spriteBee.setPosition(0, 800);
    // Is the bee currently moving?
    bool beeActive = false;
    // How fast can the bee fly
    float beeSpeed = 0.0f;
    
    // Make 3 cloud sprites from 1 texture
    Texture textureCloud;
    // Load 1 new texture
    textureCloud.loadFromFile("/Users/marcelochaves95/Projects/timber-game/Timber/Graphics/cloud.png");
    // 3 New sprites with the same texture
    Sprite spriteCloud1;
    Sprite spriteCloud2;
    Sprite spriteCloud3;
    spriteCloud1.setTexture(textureCloud);
    spriteCloud2.setTexture(textureCloud);
    spriteCloud3.setTexture(textureCloud);
    // Position the clouds off screen
    spriteCloud1.setPosition(0, 0);
    spriteCloud2.setPosition(0, 250);
    spriteCloud3.setPosition(0, 500);
    // Are the clouds currently on screen?
    bool cloud1Active = false;
    bool cloud2Active = false;
    bool cloud3Active = false;
    // How fast is each cloud?
    float cloud1Speed = 0.0f;
    float cloud2Speed = 0.0f;
    float cloud3Speed = 0.0f;
    
    while (window.isOpen())
    {
        
        if (Keyboard::isKeyPressed(Keyboard::Escape))
        {
            window.close();
        }
        
        // Clear everything from the last frame
        window.clear();
        
        // Draw our game scene here
        window.draw(spriteBackground);
        
        // Draw the clouds
        window.draw(spriteCloud1);
        window.draw(spriteCloud2);
        window.draw(spriteCloud3);
        
        // Draw the tree
        window.draw(spriteTree);
        
        // Draw the tree
        window.draw(spriteBee);
        
        // Show everything we just drew
        window.display();
    }
    
    return 0;
}
