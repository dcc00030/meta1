/* 
 * File:   Greedy.h
 * Author: dcasquel
 *
 * Created on 10 October 2016, 11:11
 */

#ifndef GREEDY_H
#define	GREEDY_H
#include "Matriz.h"
class Greedy {
public:
    Greedy( Matriz &datos);
    virtual ~Greedy();
    bool* calcularSolucion();
private:
    Matriz *datos;
    bool *sol;
    
};

#endif	/* GREEDY_H */

