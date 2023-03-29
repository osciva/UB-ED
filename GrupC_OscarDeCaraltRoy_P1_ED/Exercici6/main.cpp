//To change this license header, choose License Headers in Project Properties.
// To change this template file, choose Tools | Templates
// and open the template in the editor.
//

/* 
 * File:   main.cpp
 * Author: oscar
 *
 * Created on 18 de febrero de 2021, 19:57
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include "Rectangle.h"
#include "Square.h"
#include <stdexcept>
#include <valarray>
#include <fstream>
#include <algorithm>
#include "Quadrilateral.h"

using namespace std;

/*
 * 
 */
int Opcions(vector <string> &arr_options);

void afegirFigura(char figura, int &comptaquadrats, int &comptarectangles) {
    if (figura == 'S') {
        comptaquadrats++;
        cout << "Quadrat " << comptaquadrats << endl;
    } else if (figura == 'R') {
        comptarectangles++;
        cout << "Rectangle " << comptarectangles << endl;
    }

}

int main(int argc, char** argv) {
    vector <string> arr_options = {"Sortir", "Afegir figura", "Llegir Fitxer", "Glossari de figures"};
    int selection;
    int comptaquadrats = 0;
    int comptarectangles = 0;
    float base = 0;
    float altura = 0;
    char figura;
    ifstream fitxer;


    do {
        cout << "Hola, que vols fer?" << endl;
        selection = Opcions(arr_options);
        switch (selection) {
            case 1:
            {
                cout << "Fins a la propera ";
                break;
            }
            case 2:
            {
                cout << "(S)quare/(R)ectangle? ";
                cin>>figura;
                afegirFigura(figura, comptaquadrats, comptarectangles);
                cout << "Base? ";
                cin>>base;

                try {
                    if (figura == 'R') {
                        cout << "Altura? ";
                        cin>> altura;
                        Rectangle object(altura, base);
                        object.printRect();
                    } else if (figura == 'S') {
                        Square obj(base, base);
                        obj.printQuadrat();
                    } else {
                        throw std::invalid_argument("tria entre S o R");
                        cin>> figura;
                    }
                } catch (const std::invalid_argument& e) {
                    cout << "Error" << endl;
                }
                break;
            }
            case 3:
            {
                string nombre = "Figures.txt";
                cout << "Ruta al fitxer: " << endl;
                cout << "Figures.txt" << endl;
                cout << "Reading file figures.txt ..." << endl;

                fitxer.open(nombre, ios::in);

                if (fitxer.fail()) {
                    cout << "no es pot llegir el fitxer " << endl;
                }

                while (!fitxer.eof()) {
                    fitxer>>figura;
                    if (figura == 'S') {
                        fitxer>>base;
                        altura = base;
                        Square obj(base, altura);
                        obj.printQuadrat();
                        comptaquadrats++;
                    } else if (figura == 'R') {
                        fitxer>>base;
                        fitxer>>altura;
                        Rectangle object(altura, base);
                        object.printRect();
                        comptarectangles++;
                    }
                }
                fitxer.close();
                break;
                

            }
            case 4:
            {
                cout << "Tens " << comptaquadrats << " quadrats i " << comptarectangles << " rectangles." << endl;
                break;
            }
            default:
            {
                cout << "Opció no vàlida, torna a introduir-la siusplau" << endl;
            }
        }




    } while (selection != 1);
    return 0;
}

int Opcions(vector<string> &arr_options) {
    int selection;
    for (int i = 0; i < arr_options.size(); i++) {
        cout << i + 1 << ". " << arr_options[i] << endl;
    }
    cin >> selection;
    while (selection > arr_options.size()) {
        cout << "Opció no vàlida, torna a introduir-la siusplau" << endl;
        cin >> selection;
    }
    return selection;
}

