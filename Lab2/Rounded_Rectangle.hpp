//
//  Rounded_Rectangle.hpp
//  Lab2
//
//  Created by Fredrik Sellgren on 2018-11-29.
//  Copyright © 2018 Fredrik Sellgren. All rights reserved.
//

#ifndef Rounded_Rectangle_hpp
#define Rounded_Rectangle_hpp

#include <stdio.h>
#include "Rectangle.hpp"
#include "Circle.hpp"
class Rounded_Rectangle: public Shape
{
public:
    Rounded_Rectangle(float length=0, float width=0, float radius=0);
    virtual float getArea() const;
    Rectangle rec;
    Circle cir;
};
#endif /* Rounded_Rectangle_hpp */
