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
using namespace std;

//Toma un buffer de chars y lo pasa a int
int catoi (char buff []){
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
    Matriz prueba(4,5);
    prueba.insertar(2,3,5);
    cout << prueba.at(2,3);
    


    return 0;
}
