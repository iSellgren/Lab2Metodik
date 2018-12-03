//
//  Rectangle.cpp
//  Lab2
//
//  Created by Fredrik Sellgren on 2018-11-27.
//  Copyright © 2018 Fredrik Sellgren. All rights reserved.
//

#include "Rectangle.hpp"
Rectangle::Rectangle(float length,float width)
: length(length), width(width)
{
    
}
float Rectangle::getArea() const
{
    return length * width;
}
