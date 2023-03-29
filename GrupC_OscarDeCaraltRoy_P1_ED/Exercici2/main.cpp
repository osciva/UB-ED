/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: oscar
 *
 * Created on 18 de febrero de 2021, 18:17
 */

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

/*
 * 
 */
int Opcions(vector <string> &arr_options);

int main(int argc, char** argv) {
    vector <string> arr_options = {"Sortir", "Benvinguda", "Redefinir el nom"};
    string name;
    int selection;

    cout << "Hola, com et dius?" << endl;

    cin >> name;
    do {
        cout << "Hola " << name << ", que vols fer?" << endl;
        selection = Opcions(arr_options);
        switch (selection) {
            case 1:
                cout << "Fins a la propera " << name;
                break;
            case 2:
                cout << "Benvingut/da a l'assignatura d'estructura de dades " << name << endl;
                break;
            case 3:
                cout << "Com et dius? " << endl;
                cin >> name;
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
    while(selection>arr_options.size()){
        cout << "Opció no vàlida, torna a introduir-la siusplau" << endl;
        cin >> selection;
    }
    return selection;
}

