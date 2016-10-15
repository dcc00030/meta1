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
using namespace std;

int main(int argc, char** argv) {

    string fichero;
    bool *sol;
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
        cout << "Introduce -1 para salir" << endl;
        cin>>opcion;
        switch (opcion) {
            case 0:
            {
                // algoritmo greedy
                Greedy alg1 = Greedy(*m);
                sol = alg1.calcularSolucion();
                for (int i = 0; i < m->nCol(); i++) {
                    cout << sol[i]<<endl;
                }
                break;
            }
            case 1:
            {
                //algoritmo de busqueda local
                BusLocal *bus;
                int al = 0;
                for (int i = 0; i < m->nCol(); i++) {
                    cout << sol[i]<<endl;
                }
                al = bus->aleatorio(sol, m);
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


        }

    } while (opcion != -1);


    return 0;
}