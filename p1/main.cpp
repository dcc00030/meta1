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
using namespace std;

int main(int argc, char** argv) {
    
        //Carga de fichero
        int opcion = 0;
        
        string fichero;
        cout << "introduce el nombre del fichero a cargar" << endl;
        cin >> fichero;
        FileHandler scpe = FileHandler(fichero);
        Matriz datos = scpe.obtenerMatrizDatos();
        
        
        do {
            
            cout << "Introduce 0 para algoritmo greedy " << endl;
            cout << "Introduce 1 para algoritmo de búsqueda local" << endl;
            cout << "Introduce 2 para algoritmo tabú" << endl;
            cout << "Introduce 3 para algoritmo GRASP" << endl;
            cout << "Introduce -1 para salir" << endl;
            cin>>opcion;
            switch (opcion) {
                case 0:
                    //Algoritmo greedy
                    cout << "Opción no soportada aún" << endl;
                    break;
    
                case 1:
                    
                    //algoritmo de busqueda local
                    cout << "Opción no soportada aún" << endl;
                    break;
    
                case 2:
                    //algoritmo de busqueda tabu
                    cout << "Opción no soportada aún" << endl;
                    break;
                case 3:
                    //algoritmo GRASP
                    cout << "Opción no soportada aún" << endl;
                    break;
    
    
            }
    
        } while (opcion != -1);

    return 0;
}
