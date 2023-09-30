//
//  main.cpp
//  Cylinder
//
//  Created by Emma Bilhimer on 9/20/23.
#include "Cylinder.hpp"
#include <iostream>

int main() //sets number for radius and height
{
    Cylinder c;
    
    c.setRadius(2.0);
    c.setHeight(3.0);
    c.CalculateSurfacearea();
    c.CalculateVolume();
    
//calculates and outputs all 4 variables to the screen
    std::cout << "Radius: " << c.getRadius() << std::endl;
    std::cout << "Height: " << c.getHeight() << std::endl;
    std::cout << "Volume: " << c.getVolume() << std::endl;
    std::cout << "Surfacearea: " << c.getSurfacearea() << std::endl;
    

    return 0;
}
