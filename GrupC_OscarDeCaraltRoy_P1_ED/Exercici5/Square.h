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

class Square {
public:
    Square();
    Square(const Square& orig);
    virtual ~Square();
    
    int getArea(int base);
    int getPerimetre(int base);
    void print(int base);
    
private:
    
    int resultatArea;
    int resultatPerimetre;
    
};

#endif /* SQUARE_H */

