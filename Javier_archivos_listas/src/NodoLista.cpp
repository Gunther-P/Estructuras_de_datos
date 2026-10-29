#include "NodoLista.hpp"

NodoLista::NodoLista(Paciente* p, NodoLista* sig)
{
    paciente = p;
    siguiente = sig;
}

NodoLista::~NodoLista()
{
}
