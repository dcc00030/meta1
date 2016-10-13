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
    bool filaCubierta[datos->nFil()-2];
    for (int i =0 ; i < datos->nFil(); i++){
        filaCubierta[i] = false;
    }
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
            int aux = datos->at(i,pMax);
            if(datos->at(i,pMax)== 1){
                filaCubierta[i-2] = true;
                for(int j = 0; j < datos->nCol(); j++){
                    if(datos->at(i,j)== 1){
                        datos->eliminar(i,j);
                        datos->decrementar(1,j);
                    }
                }
            }
        }
        for(int i = 0; i <datos->nFil() ; i++){
            cout<<sol[i]<<endl;
        }
        
        sol[pMax] = true;
         int sum = 0;
        cout << "Filas cubiertas: " << endl;
        for (int i = 0; i < datos->nFil(); i++){
           
            cout << filaCubierta[i] << " "<<endl;
            if (filaCubierta[i] == true) sum++;
        }
        cout << sum << endl;
        for (int i = 0; i < datos->nFil(); i++){
            if (filaCubierta[i] == false){
                cout << "No solucion aun " << endl;
                break;
            }
            if (filaCubierta[i] == true && i == datos->nFil() - 1) {
                final = true;
            }
        }
        if (final) cout << "Hay solucion" << endl;
        
        
        
        
    }
}

Greedy::~Greedy() {
}

