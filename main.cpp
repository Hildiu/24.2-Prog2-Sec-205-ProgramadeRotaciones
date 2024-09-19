#include "UFunciones.h"

int main()
{ miEntero a[MAX];

    srand(time(nullptr));
    llenarDatos(a,MAX);
    imprimirArreglo(a,MAX);
    cout<< "\n\nEl mayor es: " << hallarMayor(a, MAX) << "\n";
    cout << "\n\nRotamos una posicion a la izquierda\n";
    rotarAlaIzquierda(a, MAX);
    imprimirArreglo(a,MAX);
    return 0;
}
