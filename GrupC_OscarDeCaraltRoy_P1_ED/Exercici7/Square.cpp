/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Square.cpp
 * Author: oscar
 * 
 * Created on 25 de febrero de 2021, 18:09
 */


#include "Square.h"
#include <iostream>
#include "Quadrilateral.h"
using namespace std;
Square::Square(): Quadrilateral(){
   
    cout<<"constructor de Square"<<endl;
}

Square::Square(float altura, float base) : Quadrilateral(altura, base) {
}

Square::~Square() {
}

void Square::printQuadrat() {
    Quadrilateral::printSquare();

}
