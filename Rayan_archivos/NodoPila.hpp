#include <iostream>
#include "Paciente.hpp"
using namespace std;

class Pila;

class NodoPila
{
public:
    NodoPila(Paciente p, NodoPila* sig = NULL);
    ~NodoPila();

private:
    Paciente valor;
    NodoPila* siguiente;
    friend class Pila;
};

typedef NodoPila* pnodoPila;
