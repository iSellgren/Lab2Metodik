//
//  main.cpp
//  Lab2
//
//  Created by Fredrik Sellgren on 2018-11-27.
//  Copyright © 2018 Fredrik Sellgren. All rights reserved.
//
#include "Shape.hpp"
#include "Shape2D.hpp"
#include "HasVolume.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Cylinder.hpp"
#include "Parallelepiped.hpp"
#include "Rounded_Rectangle.hpp"
#include <iostream>
#include <vector>
float GetData(std::vector<std::unique_ptr<Shape>> &Shapes)
{
    float TotArea = 0;
    
    for(size_t iter =0; iter < Shapes.size(); iter++)
    {
        std::cout  <<  Shapes[iter].get()->getArea()  << "\n";
        std::cout << Shapes[iter].get()->GetColour() << "\n";
        TotArea += Shapes[iter].get()->getArea();
        
        
    }
    std::cout << "Total Area = " <<TotArea << "\n";

    return 0;
}
float GetDataVolume(std::vector<std::unique_ptr<HasVolume>> &Shape3D)
{
    float TotArea = 0;
    float TotVolume = 0;
    
    for(size_t iter =0; iter < Shape3D.size(); iter++)
    {
        std::cout  <<  Shape3D[iter].get()->getArea()  << "\n";
        std::cout << Shape3D[iter].get()->GetColour() << "\n";
        std::cout << Shape3D[iter].get()->getVolume() << "\n";
        TotArea += Shape3D[iter].get()->getArea();
        TotVolume += Shape3D[iter].get()->getVolume();
        
        
    }
    std::cout << "Total Area = " <<TotArea << "\n";
    std::cout << "Total Volume = " <<TotVolume << "\n";
    
    return 0;
}
int main() {
    
    std::vector<std::unique_ptr<Shape>> Shapes;
    
    Shapes.push_back(std::make_unique<Circle>(10));
    Shapes.back()->SetColour("Svart");
    
    Shapes.push_back(std::make_unique<Circle>(10));
    Shapes.back()->SetColour("Vit");
    
    Shapes.push_back(std::make_unique<Cylinder>(10,10));
    Shapes.back()->SetColour("Gul");
    
    Shapes.push_back(std::make_unique<Rounded_Rectangle>(10,10,1));
    Shapes.back()->SetColour("Orange");
    
    std::vector<std::unique_ptr<HasVolume>> Shapes3D;
    
    Shapes3D.push_back(std::make_unique<Cylinder>(10,1));
    Shapes3D.back()->SetColour("Orange");
    
    Shapes3D.push_back(std::make_unique<Parallelepiped>(10,10,1));
    Shapes3D.back()->SetColour("Orange");
    
    
    GetData(Shapes);
    
    std::cout << "-----------" << "\n";
    GetDataVolume(Shapes3D);

    

    
    
    return 0;
}
