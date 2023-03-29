/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Square.cpp
 * Author: oscar
 * 
 * Created on 18 de febrero de 2021, 19:58
 */

#include "Square.h"
#include <iostream>
using namespace std;
Square::Square() {
}

Square::Square(const Square& orig) {
}

Square::~Square() {
}

int Square::getArea(int base){
    resultatArea = base * base;
    return resultatArea;
}
int Square::getPerimetre(int base){
    resultatPerimetre = base * 4;
    return resultatPerimetre;
}
void Square::print(int base){
    cout<< "Square("<<base<<")"<<endl;
    cout<< "L'àrea d'aquest Quadrat és de " << getArea(base)<<endl;
    cout<< "El perímetre d'aquest Quadrat és de " << getPerimetre(base)<<endl;
}