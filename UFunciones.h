//
// Created by mbermejo on 19/09/2024.
//

#ifndef INC_02_PROYECTO_UFUNCIONES_H
#define INC_02_PROYECTO_UFUNCIONES_H

#include <iostream>
#include <iomanip>
using namespace std;

typedef int miEntero;
const int MAX = 15;

void llenarDatos(miEntero * pA, miEntero n);
void imprimirArreglo(miEntero * pA, miEntero n);
miEntero hallarMayor(miEntero *pA, miEntero n);
void  rotarAlaIzquierda(miEntero *pA, miEntero n );

#endif //INC_02_PROYECTO_UFUNCIONES_H
