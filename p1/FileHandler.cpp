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

FileHandler::FileHandler(string ruta) : ruta(ruta) {
}

FileHandler::FileHandler(const FileHandler& orig) {
}

Matriz FileHandler::obtenerMatrizDatos() {
    int contador = 0;
    ifstream file(ruta);
    char buffer[128];
    file.getline(buffer, 256, ' '); //Elimina espacio inicial

    file.getline(buffer, 256, ' '); //Obtengo num filas
    int nFilas = catoi(buffer);

    file.getline(buffer, 256, ' '); //Obtengo num colunmnas
    int nColum = catoi(buffer);
    file.getline(buffer, 256, ' ');
    file.getline(buffer, 256, '\n');

    Matriz matriz = Matriz(nFilas + 1, nColum); //Añado una fila para el coste

    if (file.is_open()) {

        while (!file.eof()) {

            file.getline(buffer, 256, ' ');
            string test = (string) buffer;
            try {
                int num = stoi(test);
            } catch (exception e) {
                contador++;
                if (contador == 2) {
                    file.getline(buffer, 256, '\n');
                }

            }
        }
    }
    file.close();
}

FileHandler::~FileHandler() {
}
