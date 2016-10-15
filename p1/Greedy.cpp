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
    for (int i = 0; i < datos.nCol();i++){
        sol[i] = false;
    }
}

bool* Greedy::calcularSolucion() {

    bool fin = false; //Condicion de parada
    float ratio; //Ratio entre efectividad y coste 
    int pMax; //Posicion de la mejor columna (más ratio)
    float max; 
    int fCubiertas = 0; //Nº de filas que se han cubierto
    
    while(!fin){
        //Busco zona que maximice ratio.
        max = -2;
        for (int i = 0; i < datos->nCol(); i++){
            ratio = datos->at(1,i) / datos->at(0,i);
            if (ratio > max && sol[i] == false){
                max = ratio;
                pMax = i;
            }
            
        }
        
        
        
        //Eliminamos la columna y dejamos de tener en cuenta las zonas ya cubiertas
        //por esta columna que también lo hacen otras
        

        for(int i = 2; i < datos->nFil();i++){
            if(datos->at(i,pMax)== 1){
                fCubiertas++;
                for(int j = 0; j < datos->nCol(); j++){
                    if(datos->at(i,j)== 1){
                        datos->eliminar(i,j);
                        datos->decrementar(1,j);
                        
                        
                    }
                }
            }
        }
        
        sol[pMax] = true; //Marcamos la columna en el vector solucion
        
        if (fCubiertas == datos->nFil()-2) fin = true; //Si todas las filas 
                                                       //están cubiertas
                                                       //podemos parar
        

    }

    return sol;
}
int Greedy::calcularCosto(){
    int suma = 0;
    for(int i = 0; i < datos->nCol(); i++){
        if(sol[i] == 1){
            suma = suma + datos->at(1,i);
        }
    }
    return suma;
}
Greedy::~Greedy() {
    delete []sol;
}

