/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: oscar
 *
 * Created on 18 de febrero de 2021, 19:57
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include "Square.h"
#include <stdexcept>
using namespace std;

/*
 * 
 */
int Opcions(vector <string> &arr_options);
Square object;



void introduirQuadrat(int &comptaquadrats) {
    comptaquadrats++;
    cout << "Quadrat " << comptaquadrats << endl;

}

int main(int argc, char** argv) {
    vector <string> arr_options = {"Sortir", "Introduir quadrat"};
    int selection;
    int comptaquadrats = 0;
    int base = 0;

    do {
        cout << "Hola, que vols fer?" << endl;
        selection = Opcions(arr_options);
        switch (selection) {
            case 1:
                cout << "Fins a la propera ";
                break;
            case 2:
                introduirQuadrat(comptaquadrats);
                cout << "Base? ";
                cin>>base;
                try{
                    if(base<=0){
                        cout<<"S’ha produït una excepció"<<endl;
                        comptaquadrats--;
                        break;
                    }
                }
                catch( const std::invalid_argument& e ) {
 // codi de gestió de l’excepció, en aquest exercici: missatge per consola
                }
                object.print(base);
                break;
            default:
                cout << "Opció no vàlida, torna a introduir-la siusplau" << endl;
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
