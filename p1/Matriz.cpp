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

Matriz::Matriz(int nF, int nC) {
    if (nF <= 0) throw invalid_argument("Number of rows must be greater than 0");
    if (nC <= 0) throw invalid_argument("Number of columns must be greater than 0");

    fil = nF;
    col = nC;
    m = new int*[fil];
    for (int i = 0; i < fil; i++) {
        m[i] = new int[col];
        for (int j = 0; j < col; j++) {
            m[i][j] = 0;
        }
    }

}

//Devuelve -1 si no existe

int Matriz::at(int x, int y) {
    if (y < col && x < fil) return m[x][y];
    else return -1;
}

bool Matriz::eliminar(int x, int y) {
    if (y < col && x < fil) {
        m[x][y] = 0;
        return true;
    }
    return false;

}


bool Matriz::insertar(int x, int y, int dato) {
    if (y < col && x < fil) {
            m[x][y] = dato;
            return true;
    } else return false;
}

void Matriz::mostrar(){
    for(int i = 0; i < fil; i++){
        for(int j = 0; j < col; j++){
            if (j == col-1)
                cout <<m[i][j] << endl;
            else
                cout <<m[i][j];
        }
        }
    }

Matriz& Matriz::operator =( Matriz& b){
    Matriz* ma = new Matriz(b.nFil(),b.nCol());
    for(int i = 0; i < b.nFil(); i++){
        for(int j = 0; j < b.nCol(); j++){
            ma->insertar(i,j,b.at(i,j));
        }
    }
    this->m = ma->m;
    this->col = ma->col;
    this->fil = ma->fil;
    
    return *this;
}

Matriz::~Matriz() {
    for (int i = 0; i < fil; i++) {
        delete[] m[i];
    }
    delete []m;

}