#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include <iomanip>
using namespace std;

class Computadora 
{
    string name;
    string procesador;
    float memoria;
    int ram;
public:
    Computadora();
    Computadora(const string &name,
            const string &procesador,
            float memoria,
            int ram);

    void setName(const string &v);
    string getName();

    void setProcesador(const string &v);
    string getProcesador();

    void setMemoria(float v);
    float getMemoria();

    void setRam(int v);
    int getRam();

    friend ostream& operator<<(ostream &out, const Computadora &c)
    {
        out << left ;
        out << setw(10) << c.name;
        out << setw(10) << c.procesador;
        out << setw(8) <<  c.memoria;
        out << setw(6) << c.ram;
        out << endl;

        return out;
    }
    friend istream& operator>>(istream &in, Computadora &c)
    {
        // string temp;
        // float fuerza;
        // int salud;

        cout << "Nombre del PC: ";
        getline(cin, c.name);

        cout << "Procesador: ";
        getline(cin, c.procesador);

        cout << "Memoria: ";
        cin >> c.memoria;

        cout << "Ram: ";
        cin >> c.ram;


        return in;
    }

    bool operator==(const Computadora& c)
    {
        return name == c.name;
    }
    bool operator==(const Computadora& c) const
    {
        return name == c.name;
    }
};

#endif