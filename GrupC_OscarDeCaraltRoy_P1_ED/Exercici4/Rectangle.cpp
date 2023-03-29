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
using namespace std;

Rectangle::Rectangle() {
}

Rectangle::Rectangle(const Rectangle& orig) {
}

Rectangle::~Rectangle() {
}

float Rectangle::getArea(float altura, float base) {
    resultatArea = altura * base;
    return resultatArea;
}

float Rectangle::getPerimetre(float altura, float base) {
    resultatPerimetre = altura * 2 + base * 2;
    return resultatPerimetre;
}

void Rectangle::print(float altura, float base) {
    cout << "Rectangle(" << base << " , " << altura << ")" << endl;

    cout << "L'àrea d'aquest Rectangle és de " <<getArea(altura, base) << endl;
    cout << "El perímetre d'aquest Rectangle és de " << getPerimetre(altura, base) << endl;
}