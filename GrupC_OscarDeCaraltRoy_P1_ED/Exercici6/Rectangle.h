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
#include "Quadrilateral.h"
using namespace std;

class Rectangle : public Quadrilateral {
public:
    Rectangle();
    Rectangle(float,float);
    Rectangle(const Rectangle& orig);
    virtual ~Rectangle();


              
    void printRect();

    

private:

    float resultatArea;
    float resultatPerimetre;
    float altura;
    float base;


};

#endif /* RECTANGLE_H */

