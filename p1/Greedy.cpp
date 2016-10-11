/* 
 * File:   Greedy.cpp
 * Author: dcasquel
 * 
 * Created on 10 October 2016, 11:11
 */

#include "Greedy.h"

Greedy::Greedy( Matriz &datos) {
    this-> datos = &datos;
    sol = new bool[datos.nCol()];
}

bool* Greedy::calcularSolucion() {
    //empieza el chou
    bool final = false;
    int max = -2;
    int ratio,pMax;
    while(!final){
        //Busco zona que maximice ratio
        
        for (int i = 0; i < datos->nCol(); i++){
            ratio = datos->at(1,i) / datos->at(0,i);
            if (ratio > max && sol[i] == false){
                max = ratio;
                pMax = i;
            }
            
        }
        
        for(int i = 2; i < datos->nFil();i++){
            if(datos->at(i,pMax)== 1){
                for(int j = 0; j < datos->nCol(); j++){
                    if(datos->at(i,j)== 1 && j != pMax){
                        datos->eliminar(i,j);
                        datos->decrementar(1,j);
                    }
                }
            }
        }
        
        sol[pMax] = true;
        
        
        
        
        
    }
}

Greedy::~Greedy() {
}

