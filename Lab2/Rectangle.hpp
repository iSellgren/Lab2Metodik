//
//  Rectangle.hpp
//  Lab2
//
//  Created by Fredrik Sellgren on 2018-11-27.
//  Copyright © 2018 Fredrik Sellgren. All rights reserved.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <stdio.h>
#include "Shape.hpp"
class Rectangle : public Shape
{
public:

    Rectangle(float length = 0,float width = 0);
    float getArea() const override;
    float length;
    float width;
    
private:

};

#endif /* Rectangle_hpp */
