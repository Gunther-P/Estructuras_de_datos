#ifndef NODOLISTA_HPP
#define NODOLISTA_HPP

#include "Paciente.hpp"

class Lista;

class NodoLista
{
public:
    NodoLista(Paciente* p, NodoLista* sig = NULL);
    ~NodoLista();

private:
    Paciente* paciente;
    NodoLista* siguiente;
    friend class Lista;
};

typedef NodoLista* pnodoLista;

#endif
