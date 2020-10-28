#include <iostream>
#include "arregloDinamico.h"

using namespace std;

int main()
{
    ArregloDinamico arreglo;
    arreglo.insertar_final("Uno");
    arreglo.insertar_final("Dos");
    arreglo.insertar_final("Tres");
    arreglo.insertar_final("Cuatro");
    arreglo.insertar_final("Cinco");
    arreglo.insertar_final("Seis");
    arreglo.insertar_final("Siete");
    arreglo.insertar_final("Ocho");

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }

    arreglo.insertar_inicio("Nueve");
    arreglo.insertar_inicio("Diez");
    cout << endl;
    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
}