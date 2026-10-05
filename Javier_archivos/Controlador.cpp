#include "Controlador.hpp"
#include <cstdlib>
#include <ctime>
#include <array>
#include <iostream>
#include <algorithm>
using namespace std;

Controlador::Controlador()
{
	contadorlistanumhabitacion=0;
	contadorlistaID=0;
}

int Controlador::pacientesEnPila () 
{
    return pila.getLongitud();
}
int Controlador::pacientesEnSalaA(){
	return salaA.getLongitud();
}
int Controlador::pacientesEnSalaB(){
	return salaB.getLongitud();
}
int Controlador::pacientesEnSalaC(){
	return salaC.getLongitud();
}
int Controlador::pacientesEnSalaD(){
	return salaD.getLongitud();
}

void Controlador::genera12Pacientes() {
	int num_pacientes = 12;
    Paciente* pacientes[num_pacientes];
	if (pila.getLongitud()<48){
		for (int i = 0; i < num_pacientes; ++i) {
			pacientes[i] = new Paciente();
			pila.insertar(pacientes[i]);
		}
	}else{
		cout << "La pila ya ha alcanzado su maximo numero de pacientes";
	}

}

void Controlador::muestraPacientes(){
	pila.mostrar();
}

void Controlador::borraPacientesPila(){
	while (pila.cima()!=nullptr){
		pila.extraer();
	}
}

int Controlador::generarID(Paciente* paciente){
	if (paciente->getenfermedad()==true){
		return 1 + (rand() % (49));
	} else{
		return 51 + (rand() % (49));
	}
}

int Controlador::generarnumhabitacion(Paciente* paciente){
	if (paciente->getenfermedad()==true){
		return 101 + (rand() % (99));
	} else{
		return 201 + (rand() % (99));
	}
}

void Controlador::encolarPacientes(){
    Paciente* paciente;
    int id;
    int numhabitacion;
    
    while (pila.cima() != nullptr) {
		//la primera parte extrae un paciente de la pila, genera un id y habitacion, se asegura con 2 do while de que son unicos ambos y los pone en sus respectivo paciente y listas 
        paciente = pila.extraer();
        bool idRepetido;
        do {
            id = generarID(paciente);
            idRepetido = false; 
            
            for (int i = 0; i < contadorlistaID; i++) {
                if (listaID[i] == id) {
                    idRepetido = true;
                    break; 
                }
            }
        } while (idRepetido);
        
        bool habRepetida;
        do {
            numhabitacion = generarnumhabitacion(paciente);
            habRepetida = false; 
            
            for (int i = 0; i < contadorlistanumhabitacion; i++) {
                if (listanumhabitacion[i] == numhabitacion) {
                    habRepetida = true;
                    break; 
                }
            }
        } while (habRepetida);
        
        paciente->setID(id);
        paciente->setnumhabitacion(numhabitacion);
    
        listaID[contadorlistaID] = id;
        listanumhabitacion[contadorlistanumhabitacion] = numhabitacion;
    
        contadorlistaID++;
        contadorlistanumhabitacion++;
		//la segunda parte, una vez generados y guardados los nuevos datos del paciente, lo introduce en la cola correspondiente según su enfermedad y que cola esté más llena
        if (paciente->getenfermedad() == true) { 
            if (salaA.getLongitud() <= salaB.getLongitud()) {
                salaA.insertar(paciente);
            } else {
                salaB.insertar(paciente);
            }
        } 
        else { 
            if (salaC.getLongitud() <= salaD.getLongitud()) {
                salaC.insertar(paciente);
            } else {
                salaD.insertar(paciente);
            }
        }
    }
}
void Controlador::muestraPacientesSalasAyB(){
	cout<< " Sala A:\n";
	salaA.mostrar();
	cout<< " Sala B:\n";
	salaB.mostrar();
}
void Controlador::muestraPacientesSalasCyD(){
	cout<< " Sala C:\n";
	salaC.mostrar();
	cout<< " Sala D:\n";
	salaD.mostrar();
}

void Controlador::borraPacientesColas(){
	while (salaA.verPrimero()!=nullptr){
		salaA.eliminar();
	}
	while (salaB.verPrimero()!=nullptr){
		salaB.eliminar();
	}
	while (salaC.verPrimero()!=nullptr){
		salaC.eliminar();
	}
	while (salaD.verPrimero()!=nullptr){
		salaD.eliminar();
	}
	
}
/*	int num_pacientes = 10;
    Paciente* pacientes[num_pacientes];

    for (int i = 0; i < num_pacientes; ++i) {
        pacientes[i] = new Paciente();
    }

    cout << "Lista de Pacientes" << endl;
    for (int i = 0; i < num_pacientes; ++i) {
        pacientes[i]->mostrar();
    }

 Pila pila;
    pila.insertar(pacientes[0]);
    pila.insertar(pacientes[1]);
    pila.insertar(pacientes[2]);
    pila.insertar(pacientes[3]);
    pila.mostrar();
    
    Paciente* cima = pila.cima();
    pila.extraer();
    cout << "\tDespues de extraer la cima:";
    if (cima != nullptr) { 
        cima->mostrar(); 
    }
    pila.mostrar();
    
    pila.insertar(pacientes[4]);
    pila.mostrar();
    pila.extraer();
    pila.mostrar();
    pila.extraer();
    pila.mostrar();
    pila.extraer();
    pila.mostrar();
    pila.extraer();
    pila.mostrar();
	
    Cola cola;
    cola.insertar(pacientes[0]);
    cola.insertar(pacientes[1]);
    cola.insertar(pacientes[2]);
    cola.insertar(pacientes[3]);
    cola.mostrar();
    
    Paciente* primero = cola.verPrimero();
    cola.eliminar();
    cout << "\tDespues de extraer el primero ";
	if (primero != nullptr) { 
        primero->mostrar(); 
    }
    cola.mostrar();
    
    cola.eliminar();
    cola.mostrar();
    cola.insertar(pacientes[4]);
    cola.mostrar();
    cola.eliminar();
    cola.mostrar();
    cola.eliminar();
    cola.mostrar();
    cola.eliminar();
    cola.mostrar();
    cola.eliminar();
    cola.mostrar();
    for (int i = 0; i < num_pacientes; ++i) {
		delete pacientes[i];
    }
*/	
Controlador::~Controlador()
{
}

