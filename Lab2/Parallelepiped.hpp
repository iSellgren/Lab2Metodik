//
//  Parallelepiped.hpp
//  Lab2
//
//  Created by Fredrik Sellgren on 2018-11-27.
//  Copyright © 2018 Fredrik Sellgren. All rights reserved.
//

#ifndef Parallelepiped_hpp
#define Parallelepiped_hpp

#include <stdio.h>
#include "Shape.hpp"
#include "Rectangle.hpp"
#include "HasVolume.hpp"
class Parallelepiped : public HasVolume
{
public:
    Parallelepiped(float length=0, float width=0, float height=0);
    
    virtual float getArea() const override;
    virtual float getVolume() const override;
    Rectangle rect;
    float height;
};
#endif /* Parallelepiped_hpp */
