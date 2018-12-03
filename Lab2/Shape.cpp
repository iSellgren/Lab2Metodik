//
//  Shape.cpp
//  Lab2
//
//  Created by Fredrik Sellgren on 2018-11-27.
//  Copyright © 2018 Fredrik Sellgren. All rights reserved.
//

#include "Shape.hpp"

void Shape::SetColour(const std::string &str)
{
    colour = str;
}
std::string Shape::GetColour() const
{
    return colour;
}
