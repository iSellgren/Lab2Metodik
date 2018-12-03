//
//  Shape.hpp
//  Lab2
//
//  Created by Fredrik Sellgren on 2018-11-27.
//  Copyright © 2018 Fredrik Sellgren. All rights reserved.
//

#ifndef Shape_hpp
#define Shape_hpp
#include <string>

#include <stdio.h>
class Shape
{
public:
    void SetColour(const std::string & str);
    virtual std::string GetColour() const;
    virtual float getArea() const = 0;
//    virtual float getVolume() const = 0;
    // Pure virtual function gör classen till en abstrakt class
    // =0 i GetArea är pure-specifier
    //Man vill inte att någon ska kunna skapa ett objekt av Shape
    virtual ~Shape() = default;
    
private:
    std::string colour; // Det går väll inte att förstöra något med enbart data ?
};


#endif /* Shape_hpp */
