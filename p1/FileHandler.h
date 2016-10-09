/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FileHandler.h
 * Author: Andrea
 *
 * Created on 5 de octubre de 2016, 16:27
 */
using namespace std;
#include <string>
#include <sstream>
#include <fstream>
#include "Matriz.h"
#ifndef FILEHANDLER_H
#define FILEHANDLER_H

using namespace std;

class FileHandler {
public:
    FileHandler(string ruta);
    FileHandler(const FileHandler& orig);

    Matriz & obtenerMatrizDatos(); 
    int getFilas();
    int getColumnas();
    virtual ~FileHandler();



private:
    string ruta;
    int colum;
    int filas;
    
    int catoi(char buff []);

};

#endif /* FILEHANDLER_H */