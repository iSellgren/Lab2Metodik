//
//  Cylinder.cpp
//  Lab2
//
//  Created by Fredrik Sellgren on 2018-11-27.
//  Copyright © 2018 Fredrik Sellgren. All rights reserved.
//

#include "Cylinder.hpp"

Cylinder::Cylinder(float radie, float height)
: c(radie), height(height)
{
    
}
float Cylinder::getArea() const
{
    return 2 * Circle::PI * c.radie * height;
}
float Cylinder::getVolume() const
{
    return c.getArea() * height;
}
