/* 
 * File:   Random.h
 * Author: dcasquel
 *
 * Created on 16 October 2016, 12:29
 */

#ifndef RANDOM_H
#define	RANDOM_H
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <malloc.h>

/***** GENERADOR DE NUMEROS PSEUDOALETORIOS *****/


float Rand();

int Randint(int low, int high);

float Randfloat(float low, float high);

#endif	/* RANDOM_H */

