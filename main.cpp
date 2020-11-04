#include <iostream>
#include "arreglo.h"
#include "computadora.h"

using namespace std;

int main()
{
    Arreglo<Computadora> computadoras;

    cout << endl << "Impresion con el buscar_todos: "<< endl <<endl;
    Computadora p01("Roberto", "Ryzen 3", 1000.0, 16);
    Computadora p02("Montoya", "Intel i5", 480.0, 8);
    Computadora p03("Vargas", "Ryzen 3", 2000.0, 32);
    Computadora p04("Roberto", "Ryzen 5", 2000.0, 16);
    Computadora p05("Roberto", "Ryzen 7", 3000.0, 16);

    computadoras << p01 << p02 << p03 << p04 << p05  ;

    Arreglo<Computadora*> ptrs = computadoras.buscar_todos(p01);

    if (ptrs.size() > 0) {
        for (size_t i = 0; i < ptrs.size(); i++)
        {
            Computadora *p = ptrs[i];
            cout << *p << endl;
        }
    }
    else {
        cout << "No existen coincidencias" << endl;
    }

    cout << "Impresion de buscar:"<<endl<<endl;
    Computadora *ptr = computadoras.buscar(p03);

    if (ptr != nullptr) {
        cout << *ptr << endl;
    }
    else
    {
        cout << "No existe" << endl;
    }


    return 0;
}