#ifndef COLA_HPP
#define COLA_HPP

#include "NodoCola.hpp"
#include "Paciente.hpp"
#include <iostream>

class Cola {
    public:
        Cola();
        ~Cola();
        void insertar(Paciente* p);
        Paciente* eliminar();
        void mostrar();
        Paciente* verPrimero();
        int getLongitud();
    private:
        pnodoCola primero, ultimo;
        int longitud;
    
    
    };
#endif