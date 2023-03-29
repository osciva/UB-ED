/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   QuadrilateralContainer.cpp
 * Author: oscar
 * 
 * Created on 6 de marzo de 2021, 21:39
 */
#include "QuadrilateralContainer.h"
#include "Quadrilateral.h"
#include <stdexcept>
#include <vector>
#include <iostream>
using namespace std;

QuadrilateralContainer::QuadrilateralContainer() {
}

/*QuadrilateralConteiner::QuadrilateralConteiner(const QuadrilateralConteiner& orig) {
}*/

QuadrilateralContainer::~QuadrilateralContainer() {
    cout << "Destructor QuadrilateralContainer"<<endl;
    for (int i = 0; i < Figures.size(); i++)
        delete Figures[i];

}

float QuadrilateralContainer::getArea() {
    int area = 0;
    
    for (std::vector<Quadrilateral*>::iterator it = Figures.begin(); it !=Figures.end(); ++it)
        area += (*it)-> getArea();

    return area;
    
    

}

void QuadrilateralContainer::print() {
    cout << "L' àrea total és de: " << this->getArea() << endl;
}

void QuadrilateralContainer::addQuadrilateral(Quadrilateral* quadrilateral) {
    if (Figures.size() < 10)
        Figures.push_back(quadrilateral);
    else
        throw invalid_argument("Ocupació màxima, no caben més en aquest vector");
}
