//
//  Circle.cpp
//  Lab2
//
//  Created by Fredrik Sellgren on 2018-11-27.
//  Copyright © 2018 Fredrik Sellgren. All rights reserved.
//
#include "Circle.hpp"
Circle::Circle(float radie)
: radie(radie)
{
    
}
float Circle::getArea() const
{
    return radie * radie * PI;
}
