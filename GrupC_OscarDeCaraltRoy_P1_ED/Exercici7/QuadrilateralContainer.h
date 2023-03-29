/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   QuadrilateralContainer.h
 * Author: oscar
 *
 * Created on 6 de marzo de 2021, 21:39
 */


#ifndef QUADRILATERALCONTAINER_H
#define QUADRILATERALCONTAINER_H
#include <vector>
#include"Quadrilateral.h"

class QuadrilateralContainer {
public:
    QuadrilateralContainer();
    QuadrilateralContainer(const QuadrilateralContainer& orig);
    virtual ~QuadrilateralContainer();
    float getArea();
    void print();
    void addQuadrilateral(Quadrilateral*);

private:
    std::vector<Quadrilateral *> Figures;

};

#endif /* QUADRILATERALCONTAINER_H */
