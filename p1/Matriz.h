/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Matriz.h
 * Author: Andrea
 *
 * Created on 5 de octubre de 2016, 16:37
 */

#ifndef MATRIZ_H
#define MATRIZ_H

#include <iostream>
using namespace std;

class Matriz {
public:
    Matriz(int nF, int nC);

    int at(int x, int y);
    bool eliminar(int x, int y);
    bool insertar(int x, int y, int dato);
    
    Matriz& operator=(const Matriz& other);
    
    virtual ~Matriz();
private:
    int fil, col;
    int **m;

};

#endif /* MATRIZ_H */

