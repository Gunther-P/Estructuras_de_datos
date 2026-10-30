#ifndef LISTA_HPP
#define LISTA_HPP

#include <iostream>
#include "NodoLista.hpp"
#include "Cola.hpp"

class Lista {
    public:
        Lista();
        ~Lista();
        void insertarOrdenado(Paciente* p);
        void mostrar();
        Paciente* verUltimo();
        Paciente* verPrimero();
        Paciente* eliminar();
        void insertarColaLista(Cola& c);
        int getLongitud();
        
    private:
        pnodoLista primero, ultimo;
        int longitud;
    };
#endif
