/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: alumno
 *
 * Created on 3 de octubre de 2016, 10:55
 */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include "Matriz.h"
#include "FileHandler.h"
#include "Greedy.h"
using namespace std;

//Toma un buffer de chars y lo pasa a int

int catoi(char buff []) {
    string s = (string) buff;
    return stoi(s);
}

int main(int argc, char** argv) {

    string fichero;
    cout << "introduce el nombre del fichero a cargar" << endl;
    cin >> fichero;
    FileHandler scpe = FileHandler(fichero);
    Matriz *m = &scpe.obtenerMatrizDatos();
    
    for (int i = 0; i < m->nFil(); i++){
        cout <<m->at(i,0) <<endl;
    }
    // A partir de aqui comienza el menú
    int opcion = 0;
    do {
        cout << "Introduce 0 para algoritmo greedy " << endl;
        cout << "Introduce 1 para algoritmo de búsqueda local" << endl;
        cout << "Introduce 2 para algoritmo tabú" << endl;
        cout << "Introduce 3 para algoritmo GRASP" << endl;
        cout << "Introduce -1 para salir" << endl;
        cin>>opcion;
        switch (opcion) {
            case 0:
                // algoritmo greedy
                Greedy alg1 = Greedy(*m);
                cout << alg1.calcularSolucion();
                break;

//            case 1:
//                algoritmo de busqueda local
//                break;
//
//            case 2:
//                algoritmo de busqueda tabu
//                break;
//            case 3:
//                algoritmo GRASP
//                break;


        }

    } while (opcion != -1);


    return 0;
}