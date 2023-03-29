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
#include "QuadrilateralContainer.h"
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
    vector <string> arr_options = {"Sortir", "Afegir figura", "Llegir Fitxer", "Glossari de figures", "Recompte de l'àrea total"};
    int selection;
    int comptaquadrats = 0;
    int comptarectangles = 0;
    float base = 0;
    float altura = 0;
    char figura;
    ifstream fitxer;
    QuadrilateralContainer figures;



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
                        Rectangle *object = new Rectangle(altura, base);
                        figures.addQuadrilateral(object);
                        object -> printRect();

                    } else if (figura == 'S') {

                        Square *obj = new Square(base, base);
                        figures.addQuadrilateral(obj);
                        obj->printQuadrat();
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
                        Square *obj = new Square(base, base);
                        figures.addQuadrilateral(obj);
                        obj->printQuadrat();
                        comptaquadrats++;
                    } else if (figura == 'R') {
                        fitxer>>base;
                        fitxer>>altura;
                        Rectangle *object = new Rectangle(altura, base);
                        figures.addQuadrilateral(object);
                        object -> printRect();
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
            case 5:
            {
                figures.print();
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

/* 
 a. Què ens permet fer l’herència que no podríem fer altrament?
 
 * L'herència ens permet evitar la duplicitat i reutilitzar moltes parts del codi més senzillament.
 
b. Que passa si getArea() de la classe Quadrilateral no és virtual? Perquè?  
  
 * La paraula virtual s'utilitza per avisar al compilador que un mètode serà polimòrfic i que en les clases
 derivades existeixen variacions d'aquest mètode i que, per tant, farà de super-classe d'una jerarquía.
 El que passaria llavors ñés que hi haurien errors perquè el compilador no sabria a quina classe ens referim
 en cada ocasió.


 
c. Perquè els constructors i destructors els hem de cridar a les classes derivades i no a la classe base?
  
 *Perquè si per exemple tens la classe Mare Quadrilateral i les classes derivades Quadrat i Rectangle, si 
 els crides a la classe mare, quan vagis a fer un rectangle per exemple, també es cridarà al constructor de
 quadrat i viceversa.
 
 
 
d. Es podria fer que getArea()i getPerimetre() fos només un mètode de la classe 
“Quadrilateral”?
 
 * Si dins d'aquests mètodes posèssis uns condicionals per a que detectèssin si el que entra és o una cosa
 o altra, no hi hauria cap problema. Però tot i així no és el més òptim.
  
  
e. Anomena els membres de dades definits en els teus programes i digues a quina classe pertanyen. Explica 
les decisions de visibilitat de cadascun
  
 * El meu programa consta de:
 * Quadrat ---> que pertany a la classe Quadrilateral
 * Rectangle ---> que pertany a la classe Quadrilateral
 * Quadrilateral ---> que pertany a la classe QuadrilateralContainer
 
 
 * El que he fet amb la visibilitat és:
 Els atributs, deixar-los en privats perquè són exclusius de cada classe i els mètodes, tenia l'opció de 
 fer-los públics o protecteds per tal que es poguèssin heredar, així que els he deixat en public.
  
 
f. L’iterador que recorre les figures, quant s’incrementa cada cop? Perquè?
 
 * S'incrementa després de cada iteració, és un equivalent a un bucle for que després de cada volta augmenta en
  1 el seu valor, que en aquest cas, és la posició del següent objecte del vector.
 
 
 */