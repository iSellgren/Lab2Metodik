//
//  Parallelepiped.cpp
//  Lab2
//
//  Created by Fredrik Sellgren on 2018-11-27.
//  Copyright © 2018 Fredrik Sellgren. All rights reserved.
//

#include "Parallelepiped.hpp"
Parallelepiped::Parallelepiped(float lenght, float width, float height)
: rect(lenght, width), height(height)
{
    
}
float Parallelepiped::getArea() const
{
    return ((rect.width)*height*2) + ((rect.length)*height*2) + ((rect.length)*(rect.width))*2;
}
float Parallelepiped::getVolume() const
{
    return rect.getArea() * height;
}
