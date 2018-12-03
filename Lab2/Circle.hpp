//
//  Circle.hpp
//  Lab2
//
//  Created by Fredrik Sellgren on 2018-11-27.
//  Copyright © 2018 Fredrik Sellgren. All rights reserved.
//

#ifndef Circle_hpp
#define Circle_hpp
#include <stdio.h>
#include "Shape.hpp"
class Circle : public Shape
{
public:

    Circle(float radius = 0);
    float getArea() const override;
    static constexpr float PI = 3.14159265359;
    float radie;
    
private:
    
};
#endif /* Circle_hpp */
