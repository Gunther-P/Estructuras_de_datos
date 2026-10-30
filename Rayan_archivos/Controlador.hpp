#ifndef CONTROLADOR_HPP
#define CONTROLADOR_HPP

#include <iostream>
#include "Paciente.hpp"
#include "Pila.hpp"
#include "Cola.hpp"
#include "Lista.hpp"


class Controlador {
    private:
        Cola Sala_A;
        Cola Sala_B;
        Cola Sala_C;
        Cola Sala_D;
        Pila Pila_pacientes;
        Pila aux;
        Lista Lista_Apendicitis;
        Lista Lista_Hernias;
        int n_habitacion[300];
        int id[100];
        void liberar(Paciente* p);
        void vaciarCola(Cola& c);
        void vaciarLista(Lista& l);
    public:
        Controlador();
        ~Controlador();
        int pacientesEnPila();
        int pacientesEnSalaA();
        int pacientesEnSalaB();
        int pacientesEnSalaC();
        int pacientesEnSalaD();
        int pacientesEnListaApendicitis();
        int pacientesEnListaHernias();
        int pacientesEnArbol();
        void opcion_A();
        void opcion_B();
        void opcion_C();
        void opcion_D();
        void opcion_E();
        void opcion_F();
        void opcion_G();
        void opcion_H();
        void opcion_I();
        void opcion_J();
        void opcion_K();
        void opcion_L();
        int generarID(Paciente* paciente);
        int generarnhabitacion(Paciente* paciente);
};

#endif