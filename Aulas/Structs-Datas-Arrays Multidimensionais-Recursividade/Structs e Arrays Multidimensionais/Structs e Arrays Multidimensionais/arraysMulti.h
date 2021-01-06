
/*
Manipular Arrays Multidimensionais
lufer
Ver: https://beginnersbook.com/2014/01/2d-arrays-in-c-example/
*/

#ifndef ARRAYDUP
#define ARRAYDUP 

#include <stdio.h>

#define N 10

//Cabe�alhos de fun��es e m�todos

//apresenta array bidimensional
void mostraArrayBidimensional(int v[][N], int t);

//inicializa array bidimensional com determinado valor
void inicalizaArrayBidimensional(int v[][N], int t, int valor);

//procura valor num array bidimensional...devolve posi��o
int procuraArrayBidimensional(int v[][N], int t, int valor);

#endif // !ARRAYDUP
