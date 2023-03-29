/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Quadrilateral.cpp
 * Author: oscar
 * 
 * Created on 28 de febrero de 2021, 16:55
 */

#include "Quadrilateral.h"
#include <iostream>
using namespace std;

Quadrilateral::Quadrilateral() {
    
    cout<<"constructor de Quadrilateral"<<endl;
    altura = 0;
    base = 0;
}

Quadrilateral::Quadrilateral(float _altura, float _base) {
    altura = _altura;
    base = _base;
}

Quadrilateral::~Quadrilateral() {
}

float Quadrilateral::getArea(){
    
    resultatArea = base* altura;
    return resultatArea;

}

float Quadrilateral::getPerimetre(){
    
    resultatPerimetre = base*2 + altura*2;
    return resultatPerimetre;

}
void Quadrilateral::printSquare(){
    cout<< "Square("<<base<<")"<<endl;
    cout<< "L'àrea d'aquest Quadrat és de " << Quadrilateral::getArea()<<endl;
    cout<< "El perímetre d'aquest Quadrat és de " << Quadrilateral::getPerimetre()<<endl;
}
void Quadrilateral::printRectangle() {
    cout << "Rectangle(" << base << " , " << altura << ")" << endl;

    cout << "L'àrea d'aquest Rectangle és de " <<Quadrilateral::getArea() << endl;
    cout << "El perímetre d'aquest Rectangle és de " <<Quadrilateral::getPerimetre() << endl;
}
