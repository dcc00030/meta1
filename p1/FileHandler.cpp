/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FileHandler.cpp
 * Author: Andrea
 * 
 * Created on 5 de octubre de 2016, 16:27
 */

#include "FileHandler.h"

using namespace std;
FileHandler::FileHandler(string ruta) : ruta(ruta) {
}

FileHandler::FileHandler(const FileHandler& orig) {
}

int FileHandler::catoi(char buff []) {
        string s = (string) buff;
        return stoi(s);
}

Matriz & FileHandler::obtenerMatrizDatos() {
    int contador = 0; 
    
    
    ifstream file(ruta); //Apertura de archivo
    
    if (file.is_open()){
        
        cout << "Archivo "<<this->ruta<<" abierto correctamente" << endl;
        
        char buffer[128];
    
        int nFilas, nColum;
    
        file >> nFilas;
        file >> nColum; //Asigno nº filas y columnas.
   
        Matriz *matriz =new Matriz(nFilas + 2, nColum); //Creo matriz
                                                //añadiendo una fila para coste
        //Inserto costes
        int coste;
        for (int i = 0; i < nColum; i++){
            file >> coste;
            matriz->insertar(0,i,coste);
        }
        
        int contador;
        int columna;
        
        //Construyo el resto de la matriz
        for (int i = 1; i < nFilas; i++){
            file >> contador; //Nº de columnas que cubren la zona i
            while (contador > 0){
                file >> columna;
                matriz->incrementar(1,columna-1);
                matriz->insertar(i,columna,1); //En la fila i, columna columna
                                              //Un 1 indica que i cubre columna
                contador--;
            }
           
        }
        return  *matriz;

    } else {
        cout << "Apertura de " << this->ruta <<" fallida"<<endl;
    }

}

FileHandler::~FileHandler() {
}