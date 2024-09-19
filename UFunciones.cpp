//
// Created by mbermejo on 19/09/2024.
//

#include "UFunciones.h"


void llenarDatos(miEntero * pA, miEntero n)
{
    for(int i=0; i<n; i++)
        pA[i] = rand()  % 50 + 1;
}


void imprimirArreglo(miEntero * pA, miEntero n)
{
  for(int i=0; i<n; i++)
      cout << setw(5) << i;
  cout << "\n";
  for(int i=0; i<n; i++)
      cout << setw(5) << pA[i];
}

miEntero hallarMayor(miEntero *pA, miEntero n)
{
  miEntero mayor = pA[0];
  for(int indice=1; indice<n; indice++)
      if( pA[indice]>mayor)
          mayor = pA[indice];
  return mayor;
}

void  rotarAlaIzquierda(miEntero *pA, miEntero n )
{
  miEntero auxiliar = pA[0];
  for( int indice=1; indice <n; indice++)
       pA[indice-1]   = pA[indice];
  pA[n-1] = auxiliar;
}