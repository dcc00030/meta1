/* 
 * File:   BusLocal.h
 * Author: dcasquel
 *
 * Created on 15 October 2016, 16:09
 */
#include "Matriz.h"
#include "Greedy.h"
#include <stdlib.h>
#ifndef BUSLOCAL_H
#define	BUSLOCAL_H

class BusLocal {
public:
    BusLocal();
    BusLocal(const BusLocal& orig);
    virtual ~BusLocal();
    int seleccionAleatoria(bool *b,Matriz *m);
    
private:
    

};

#endif	/* BUSLOCAL_H */

