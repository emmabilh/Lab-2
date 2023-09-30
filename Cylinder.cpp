//
//  Cylinder.cpp
//  Cylinder
//
//  Created by Emma Bilhimer on 9/28/23.
//

#include "Cylinder.hpp"

Cylinder::Cylinder()
{
    radius = 0;
}

Cylinder::~Cylinder()   //constructor
{
}

void Cylinder::setRadius(float radius_)
{
    radius = radius_;
}

float Cylinder::getRadius()
{
    return radius;
}

void Cylinder::setHeight(float height_) //creates variable to set height
{
    height = height_;
}

float Cylinder::getHeight() //formula to calculate SA then computes
{
    return height;
}

void Cylinder::CalculateVolume() //formula to calculate volume
{
    volume = 3.141592 * radius * radius * height;
    
}
float Cylinder::getVolume() //formula to calculate SA then computes
{
    return volume;
}

void Cylinder::CalculateSurfacearea() //formula to calculate surface area
{
    surfacearea = 3.141592 * radius * height;
}
    
float Cylinder::getSurfacearea() //computes formula from calculation and outputs it
{
    return surfacearea;
}
