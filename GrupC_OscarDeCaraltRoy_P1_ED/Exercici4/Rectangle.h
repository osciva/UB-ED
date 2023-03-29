/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rectangle.h
 * Author: oscar
 *
 * Created on 20 de febrero de 2021, 18:35
 */

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <string.h>
using namespace std;

class Rectangle {
public:
    Rectangle();
    Rectangle(const Rectangle& orig);
    virtual ~Rectangle();
    
    float getArea(float altura, float base);
    float getPerimetre(float altura, float base);
    void print(float altura, float base);
    
private:
    
    float resultatArea;
    float resultatPerimetre;
   

};

#endif /* RECTANGLE_H */

