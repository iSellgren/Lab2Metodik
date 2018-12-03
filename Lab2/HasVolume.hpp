//
//  Shape3D.hpp
//  Lab2
//
//  Created by Fredrik Sellgren on 2018-11-27.
//  Copyright © 2018 Fredrik Sellgren. All rights reserved.
//

#ifndef HasVolume_hpp
#define HasVolume_hpp

#include <stdio.h>
#include "Shape.hpp"
class HasVolume : public Shape
{
public:
    virtual float getArea() const = 0; // Pure virtual function gör classen till en abstrakt class
    virtual float getVolume() const = 0;
        //Man vill inte kunna skapa ett objekt av Shape3D

};
#endif /* Shape3D_hpp */
