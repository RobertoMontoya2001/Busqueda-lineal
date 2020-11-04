#include "computadora.h"

Computadora::Computadora()
{

}

Computadora::Computadora(const string &name,
            const string &procesador,
            float memoria,
            int ram)
{
    this->name = name;
    this->procesador = procesador;
    this->memoria = memoria;
    this->ram = ram;
}

void Computadora::setName(const string &v)
{
    name = v;
}

string Computadora::getName()
{
    return name;
}

void Computadora::setProcesador(const string &v)
{
    procesador = v;
}

string Computadora::getProcesador()
{
    return procesador;
}

void Computadora::setMemoria(float v)
{
    memoria = v;
}

float Computadora::getMemoria()
{
    return memoria;
}

void Computadora::setRam(int v)
{
    ram = v;
}

int Computadora::getRam()
{
    return ram;
}