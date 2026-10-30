#include "NodoLista.hpp"

NodoLista::NodoLista(Paciente* p, NodoLista* sig, NodoLista* ant)
{
    valor = p;
    siguiente = sig;
    anterior = ant;
}

NodoLista::~NodoLista()
{
}