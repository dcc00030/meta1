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

int BusLocal::seleccionAleatoria(bool* b) {
    
    float eleccion = Randint(0,499);
    while (b[aleatorio] != 1) {
        eleccion = Randint(0,499);
    }
    return eleccion;
}

BusLocal::~BusLocal() {
}

