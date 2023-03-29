/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rectangle.cpp
 * Author: oscar
 * 
 * Created on 20 de febrero de 2021, 18:35
 */

#include "Rectangle.h"
#include <iostream>
#include "Quadrilateral.h"
using namespace std;

Rectangle::Rectangle() : Quadrilateral(){
    
    cout<<"constructor de Rectangle"<<endl;
}

Rectangle::Rectangle(float altura, float base) : Quadrilateral(altura, base) {
    
}

Rectangle::~Rectangle() {
}

void Rectangle::printRect(){
    Quadrilateral::printRectangle();
}