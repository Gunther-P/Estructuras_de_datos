#ifndef CONTROLADOR_HPP
#define CONTROLADOR_HPP
#include "src/Paciente.hpp"
#include "src/Pila.hpp"
#include "src/Cola.hpp"
class Controlador
{
private:
	Pila pila;
	Pila pilauxiliar;
	Cola salaA;
	Cola salaB;
	Cola salaC;
	Cola salaD;
	int listanumhabitacion[200];
	int listaID[100];
	int contadorlistanumhabitacion;
	int contadorlistaID;
public:
	Controlador();
	~Controlador();
	int pacientesEnPila();
	int pacientesEnSalaA();
	int pacientesEnSalaB();
	int pacientesEnSalaC();
	int pacientesEnSalaD();
    void genera12Pacientes();
	void muestraPacientes();
	void borraPacientesPila();
	void encolarPacientes();
	void muestraPacientesSalasAyB();
	void muestraPacientesSalasCyD();
	int generarID(Paciente* paciente);
	int generarnumhabitacion(Paciente* paciente);
	void borraPacientesColas();

};

#endif // CONTROLADOR_HPP
