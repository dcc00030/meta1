/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Matriz.cpp
 * Author: Andrea
 * 
 * Created on 5 de octubre de 2016, 16:37
 */

#include "Matriz.h"
#include <stdexcept>
using namespace std;

Matriz::Matriz(int nF, int nC){
    if (nF <= 0) throw invalid_argument("Number of rows must be grater than 0");
    if (nC <= 0) throw invalid_argument("Number of columns must be grater than 0");
    
    fil = nF;
    col = nC;
    m = new int*[fil];
    for (int i = 0; i < fil; i++){
        m[fil] = new int[col];
        m[fil][col] = -1;
    }
    
    
}

//Devuelve -1 si no existe
int Matriz::at(int x, int y){
    if ( x < col && y < fil ) return m[x][y];
    else return -1;
}

bool Matriz::eliminar(int x, int y){
    if ( x < col && y < fil ){
        m[x][y] = -1;
        return true;
    }
    return false;
    
}

//No sobreescribe. Si la posición está ocupada o no existe, devuelve falso
bool Matriz::insertar(int x, int y, int dato){
    if ( x < col && y < fil ){
        if (m[x][y] != -1){
            m[x][y] = dato;
            return true;
        }
        return false;
        
    }
    
    else return false;
}
        
Matriz::~Matriz(){
    for (int i = 0; i < fil; i++){
        delete [] m[i];
    }
    delete []m;
}