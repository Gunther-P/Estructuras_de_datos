#include "Pila.hpp"

Pila::Pila()
{
    ultimo = NULL;
    longitud = 0;
}

void Pila::insertar (Paciente* p) 
{
    pnodoPila nuevo;
    nuevo = new NodoPila(p, ultimo);
    ultimo = nuevo;
    longitud++;
}


Paciente* Pila::extraer() 
{
    pnodoPila nodo;
    Paciente* p; 
    
    if(!ultimo)
        return nullptr; 
    
    nodo = ultimo;
    ultimo = nodo->siguiente;
    p = nodo->paciente;
    longitud--;
    
    delete nodo; 
    
    return p;
}


Paciente* Pila::cima()
{
    if(!ultimo)
        return nullptr; 
        
    return ultimo->paciente;
}

void Pila::mostrar()
{
    pnodoPila aux = ultimo;
    while(aux) {
        aux->paciente->mostrarPila(); 
        aux = aux->siguiente;
    }
    cout << endl;
}

int Pila::getLongitud()
{
    return this->longitud;
}

Pila::~Pila()
{
    pnodoPila aux;
    while(ultimo) {
        aux = ultimo;
        ultimo = ultimo->siguiente;
                
        delete aux;
    }
}