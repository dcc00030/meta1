/* 
 * File:   BusLocal.cpp
 * Author: dcasquel
 * 
 * Created on 15 October 2016, 16:09
 */

#include "BusLocal.h"
#include "Random.h"

BusLocal::BusLocal() {
}

BusLocal::BusLocal(const BusLocal& orig) {
}

int BusLocal::seleccionAleatoria(bool* b, Matriz* m) {

    int eleccion = Randint(0, m->nCol() -1);
    while (b[eleccion] != 1 ) {
        eleccion = Randint(0, m->nCol()-1);
    }


    return eleccion;
}

BusLocal::~BusLocal() {
}

