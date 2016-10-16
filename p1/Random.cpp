/* 
 * File:   Random.cpp
 * Author: dcasquel
 * 
 * Created on 16 October 2016, 12:29
 */

#include "Random.h"

#define MASK 2147483647
#define PRIME 65539
#define SCALE 0.4656612875e-9

int Seed = 26258657;

float Rand(){
    Seed = ( (Seed * PRIME) & MASK);
    return (Seed * SCALE );
}

int Randint(int low, int high){
    return ( (int) (low + (high-(low)+1) * Rand()));
}

float Randfloat(float low, float high){
    return ( (float) (low + (high - (low)+1) * Rand()));
}
