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

//Toma un buffer de chars y lo pasa a int

int catoi(char buff []) {
    string s = (string) buff;
    return stoi(s);
}

int main(int argc, char** argv) {

    //    ifstream file ("scpe1.txt");
    //    char buffer[128];
    //    file.getline(buffer,256,' '); //Elimina espacio inicial
    //    
    //    file.getline(buffer,256,' '); //Obtengo num filas
    //    int nFilas = catoi(buffer);
    //    
    //    file.getline(buffer,256,' '); //Obtengo num colunmnas
    //    int nColum = catoi(buffer);
    //    
    //    int matriz[nFilas+1][nColum]; //Añado una fila para el coste
    //    
    //    if (file.is_open()){
    //        
    //        while (!file.eof()){
    //            
    //            file.getline(buffer,256,' ');
    //
    //            string test = (string)buffer;
    //
    //            int num = stoi(test);
    //
    //            file.close();
    //        }
    //
    //        
    //    }

    //A partir de aqui comienza el menú
    //    int opcion = 0;
    //    do {
    //        cout << "Introduce 0 para algoritmo greedy " << endl;
    //        cout << "Introduce 1 para algoritmo de búsqueda local" << endl;
    //        cout << "Introduce 2 para algoritmo tabú" << endl;
    //        cout << "Introduce 3 para algoritmo GRASP" << endl;
    //        cout << "Introduce -1 para salir" << endl;
    //        cin>>opcion;
    //        switch (opcion) {
    //            case 0:
    //                // algoritmo greedy
    //                break;
    //
    //            case 1:
    //                //algoritmo de busqueda local
    //                break;
    //
    //            case 2:
    //                //algoritmo de busqueda tabu
    //                break;
    //            case 3:
    //                //algoritmo GRASP
    //                break;
    //
    //
    //        }
    //
    //    } while (opcion != -1);
    string fichero;
    cout << "introduce el nombre del fichero a cargar" << endl;
    cin >> fichero;
    FileHandler scpe = FileHandler(fichero);
    //scpe.obtenerMatrizDatos();

    //Todo lo comentado funciona perfectamente
    //    Matriz prueba(4,5);
    //    prueba.insertar(2,3,5);
    //    cout << prueba.at(2,3);
    /*for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (j == 4)
                cout << prueba.at(i,j) << endl;
            else
                cout << prueba.at(i,j);
        }
    }
     * */
    scpe.obtenerMatrizDatos().mostrar();
    return 0;
}