#include "Paciente.hpp"
#include <iostream>
#include <cstdlib> 
#include <cstdio>
using namespace std;

Paciente::Paciente() {
    this->ID = ID;
    
    this->enfermedad = rand() % 2; 
    
	for (int i = 0; i < 8; ++i) {
		this->dni[i] = '0' + (rand() % 10); 
	}

	this->dni[8] = 'A' + (rand() % 26);

	this->dni[9] = '\0';
}

Paciente::~Paciente() {
}

int Paciente::getID() {
    return this->ID;
}

int Paciente::getnumhabitacion() {
    return this->numhabitacion;
}

bool Paciente::getenfermedad() {
    return this->enfermedad;
}

void Paciente::setID(int nuevoID) {
	this->ID = nuevoID;
}
void Paciente::setnumhabitacion(int nuevonumhabitacion) {
	this->numhabitacion = nuevonumhabitacion;
}

void Paciente::mostrar() {
    cout << " El paciente cuyo DNI es " << this->dni << " tiene " << (this->enfermedad ? "apendicitis" : "hernias") 
	     << endl;
}


