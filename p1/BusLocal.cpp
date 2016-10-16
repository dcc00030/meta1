/* 
 * File:   BusLocal.cpp
 * Author: dcasquel
 * 
 * Created on 15 October 2016, 16:09
 */

#include "BusLocal.h"
#include "random.h"
BusLocal::BusLocal() {
}

BusLocal::BusLocal(const BusLocal& orig) {
}

int BusLocal::seleccionAleatoria(bool* b, Matriz* m) {
    
    int eleccion = Randint(0,m->nCol());
    while (b[eleccion] != 1) {
        if(eleccion == m->nCol()){
            eleccion = 0;
        }else{
        eleccion++;
        }
    }
    return eleccion;
}

BusLocal::~BusLocal() {
}

