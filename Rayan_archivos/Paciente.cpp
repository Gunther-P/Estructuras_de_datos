#include "Paciente.hpp"

Paciente::Paciente()
{
    generarDni();
    hernia = (rand() % 2 == 1);
    id = 0;
    habitacion = 0;
}

Paciente::~Paciente() {}

void Paciente::mostrar() const
{
    cout << "El paciente cuyo DNI es " << dni << " tiene ";
    cout << (hernia ? "hernias" : "apendicitis");

    if (id > 0) {
        cout << ", su ID es: " << id << " y su habitacion asignada es: " << habitacion;
    }
    cout << endl;
}

void Paciente::generarDni()
{
    int i;
    dni = "";
    for(i = 0; i < 8; i++) {
        dni = dni + (char)('0' + rand() % 10);
    }
    dni = dni + (char)('A' + rand() % 26);
}

bool Paciente::get_enfermedad()
{
    return this->hernia;
}

int Paciente::get_ID()
{
    return this->id;
}

int Paciente::get_habitacion()
{
    return this->habitacion;
}

void Paciente::set_ID(int i)
{
    id = i;
}

void Paciente::set_habitacion(int h)
{
    habitacion = h;
}