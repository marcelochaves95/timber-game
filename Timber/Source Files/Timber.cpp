//
//  main.cpp
//  Timber
//
//  Created by Marcelo Chaves on 03/01/19.
//  Copyright © 2019 Marcelo Chaves. All rights reserved.
//

#include <SFML/Graphics.hpp>

using namespace sf;

int main() {
    VideoMode vm(1280, 800);
    
    RenderWindow window(vm, "Timber", Style::Fullscreen);
    while (window.isOpen())
    {
        
        if (Keyboard::isKeyPressed(Keyboard::Escape))
        {
            window.close();
        }
        
        window.clear();
        
        window.display();
    }
    
    return 0;
}
