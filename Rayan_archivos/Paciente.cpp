#include "Paciente.hpp"

Paciente::Paciente()
{
    generarDni();
    hernia = (rand() % 2 == 1);
}

void Paciente::mostrar() const
{
    cout << "[" << dni << ", " << ", hernia: " << (hernia ? "si" : "no") << "]";
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
