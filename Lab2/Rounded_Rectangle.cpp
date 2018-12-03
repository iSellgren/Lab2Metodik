//
//  Rounded_Rectangle.cpp
//  Lab2
//
//  Created by Fredrik Sellgren on 2018-11-29.
//  Copyright © 2018 Fredrik Sellgren. All rights reserved.
//

#include "Rounded_Rectangle.hpp"
Rounded_Rectangle::Rounded_Rectangle(float length, float width, float radius)
: rec(length,width), cir(radius)
{
    
}
float Rounded_Rectangle::getArea() const
{
    return rec.getArea() - 4 * (cir.radie * cir.radie) + cir.getArea();
}
