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
#include "BusLocal.h"
#include "random.h"
using namespace std;

int main(int argc, char** argv) {

    string fichero; 
    bool *solGreedy; //
    cout << "Introduce el nombre del fichero de datos: ";
    cin >> fichero;
    FileHandler scpe = FileHandler(fichero);
    Matriz *m = &scpe.obtenerMatrizDatos();



    //Interfaz para ejecutar algoritmos
    int opcion = 0;
    do {
        cout << "Introduce 0 para algoritmo greedy " << endl;
        cout << "Introduce 1 para algoritmo de búsqueda local" << endl;
        cout << "Introduce 2 para algoritmo tabú" << endl;
        cout << "Introduce 3 para algoritmo GRASP" << endl;
        cout << "Introduce 4 para cambiar de fichero " << endl;
        cout << "Introduce -1 para salir" << endl;
        cin>>opcion;
        switch (opcion) {
            case 0:
            {
                //Algoritmo Greedy
                Greedy algoritmoGreedy = Greedy(*m); //Pasamos la eedd con los datos de entrada
                solGreedy = algoritmoGreedy.calcularSolucion(); //solGreedy almacena el array con la solucion al problema
                
                cout << "La solucion mediante algoritmo greedy para los datos "
                     << fichero << " ha sido calculada" << endl;
                break;
            }
            case 1:
            {
                //Algoritmo de busqueda local
                BusLocal *busLoc;
                int eleccion; //Almacenará el subconjunto que se elimina de la solución
                al = busLoc->aleatorio(solGreedy);
                cout<< al<<endl;
                break;
            }
                //            case 2:
                //            {
                //                algoritmo de busqueda tabu
                //                break;
                //            }
                //            case 3:
                //            {
                //                algoritmo GRASP
                //                break;
                //            }
            case 4:
                cout << "Introduce el nombre del fichero de datos: ";
                cin >> fichero;
                scpe = FileHandler(fichero);
                m = &scpe.obtenerMatrizDatos();
                break;

        }

    } while (opcion != -1);


    return 0;
}