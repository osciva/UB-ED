/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: oscar
 *
 * Created on 15 de febrero de 2021, 18:08
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
string arr_options[] = {"Sortir", "Benvinguda"};
auto array_length = end(arr_options) - begin(arr_options);

void escollir(int numero, string name) {
    do {
        if (numero == 1)break;

        cout << "Benvingut/da a l'assignatura d'estructura de dades "<<name << endl;
        cout << "Hola " << name << ", que vols fer?" << endl;
        for (int i = 0; i < array_length; i++) {
            cout << i + 1 << "." << arr_options[i] << endl;
        }
        cin>>numero;


    } while (numero != 1);
    cout << "Fins a la propera " << name << endl;
}

int main(int argc, char** argv) {
    string name;
    int numero;



   


    cout << "Hola, com et dius? " << endl;
    cin >> name;
    cout << "Benvingut/da a l'assignatura d'estructura de dades"<<name<< endl;
    cout << "Hola " << name << ", que vols fer?" << endl;
    for (int i = 0; i < array_length; i++) {
            cout << i + 1 << "." << arr_options[i] << endl;
    }
    cin>>numero;
    escollir(numero, name);
    return 0;
}
