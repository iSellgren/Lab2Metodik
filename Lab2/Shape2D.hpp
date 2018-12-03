//
//  TwoDShape.hpp
//  Lab2
//
//  Created by Fredrik Sellgren on 2018-11-27.
//  Copyright © 2018 Fredrik Sellgren. All rights reserved.
//

#ifndef TwoDShape_hpp
#define TwoDShape_hpp
#include "Shape.hpp"
#include <stdio.h>
class Shape2D : public Shape
{
    public:
    virtual float getArea() const = 0; // Pure virtual function gör classen till en abstrakt class
    
    private:

    
};
#endif /* TwoDShape_hpp */
