#ifndef PACIENTE_HPP
#define PACIENTE_HPP

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Paciente {
    public:
        Paciente();
        ~Paciente();
        void mostrar() const;
        bool get_enfermedad();
        int get_ID();
        int get_habitacion();
        void set_ID(int i);
        void set_habitacion(int h);

    private:
        string dni;
        bool hernia;
        int id;
        int habitacion;
        void generarDni();
};

#endif