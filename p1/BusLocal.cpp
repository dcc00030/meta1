/* 
 * File:   BusLocal.cpp
 * Author: dcasquel
 * 
 * Created on 15 October 2016, 16:09
 */

#include "BusLocal.h"

BusLocal::BusLocal() {
}

BusLocal::BusLocal(const BusLocal& orig) {
}

int BusLocal::aleatorio(bool* b, Matriz *m) {
    int aleatorio = -1;
    srand(26258657);
    aleatorio = 0 + rand() % m->nCol()-1;
    while (aleatorio == -1 || b[aleatorio] == 0) {
        if (b[aleatorio-1] == 1) {
            return aleatorio;
        } else {
            aleatorio++;;
        }

    }
}

BusLocal::~BusLocal() {
}

