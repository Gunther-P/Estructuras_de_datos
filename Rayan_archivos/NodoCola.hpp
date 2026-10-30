#ifndef NODOCOLA_HPP
#define NODOCOLA_HPP

#include <iostream>
#include "Paciente.hpp"
using namespace std;

class Cola;

class NodoCola
{
public:
    NodoCola(Paciente* p, NodoCola* sig = NULL);
    ~NodoCola();

private:
    Paciente* paciente;
    NodoCola* siguiente;
    friend class Cola;
};
typedef NodoCola* pnodoCola;

#endif