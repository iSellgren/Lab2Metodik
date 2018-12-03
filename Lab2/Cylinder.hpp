//
//  Cylinder.hpp
//  Lab2
//
//  Created by Fredrik Sellgren on 2018-11-27.
//  Copyright © 2018 Fredrik Sellgren. All rights reserved.
//

#ifndef Cylinder_hpp
#define Cylinder_hpp

#include <stdio.h>
#include "HasVolume.hpp"
#include "Circle.hpp"
class Cylinder : public HasVolume
{
public:
    Cylinder(float radie = 0, float height = 0);
    virtual float getArea() const override;
    virtual float getVolume() const override;
    Circle c;
private:
    float height;
};
#endif /* Cylinder_hpp */
