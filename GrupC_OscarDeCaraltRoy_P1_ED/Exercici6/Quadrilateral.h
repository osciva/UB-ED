/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Quadrilateral.h
 * Author: oscar
 *
 * Created on 28 de febrero de 2021, 16:55
 */

#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

class Quadrilateral {
public:
    Quadrilateral();
    Quadrilateral(float,float);
    Quadrilateral(const Quadrilateral& orig);
    virtual ~Quadrilateral();
    virtual float getArea();
    virtual float getPerimetre();
    virtual void printSquare();
    virtual void printRectangle();
    

private:
    float resultatArea;
    float resultatPerimetre;
    float altura;
    float base;


};


#endif /* QUADRILATERAL_H */

