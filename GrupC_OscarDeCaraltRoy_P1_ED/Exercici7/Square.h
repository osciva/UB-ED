/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Square.h
 * Author: oscar
 *
 * Created on 25 de febrero de 2021, 18:09
 */
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Square.h
 * Author: oscar
 *
 * Created on 18 de febrero de 2021, 19:58
 */

#ifndef SQUARE_H
#define SQUARE_H
#include "Quadrilateral.h"
class Square : public Quadrilateral {
public:
    Square();
    Square(float, float);
    Square(const Square& orig);
    virtual ~Square();

    

    void printQuadrat();

    

private:

    float resultatArea;
    float resultatPerimetre;
    float altura;
    float base;
    
};

#endif /* SQUARE_H */

