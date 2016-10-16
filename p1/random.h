#include <math.h>
#include <stdio.h>
#include <string.h>
#include <malloc.h>


/***** GENERADOR DE NUMEROS PSEUDOALETORIOS *****/

/* used in random number generator below */
#define MASK 2147483647
#define PRIME 65539
#define SCALE 0.4656612875e-9
#define Seed 26258657
/*******************************************************************/
/*  Rand genera un numero real pseudoaleatorio entre 0 y 1,        */
/*  excluyendo el 1.						   */
/*  Randint genera un numero entero entre low y high, ambos 	   */
/*  incluidos.	   						   */
/*  Randfloat genera un numero real entre low y high, incluido low */
/*  y no incluido high                                             */
/*******************************************************************/

//tuve que borrar la asignacion Seed = Seed 
#define Rand()  (( ( (Seed * PRIME) & MASK) ) * SCALE )

#define Randint(low,high) ( (long) (low + (high-(low)+1) * Rand()))

#define Randfloat(low,high) ( (low + (high-(low))*Rand()))


