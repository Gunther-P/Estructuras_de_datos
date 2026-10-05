#include "Cola.hpp"

Cola::Cola()
{
    primero = NULL;
    ultimo = NULL;
    longitud = 0;
}

void Cola::insertar (Paciente* p)
{
    pnodoCola nuevo;
    nuevo = new NodoCola(p);
    
    if(ultimo)
        ultimo->siguiente = nuevo;
    ultimo = nuevo;
    
    if(!primero)
        primero = nuevo;
        
    longitud++;
}

void Cola::mostrar()
{
    pnodoCola aux = primero;
    while(aux) {
        aux->paciente->mostrarCola(); 
        aux = aux->siguiente;
    }
    cout << endl;
}

Paciente* Cola::eliminar()
{
    pnodoCola nodo;
    Paciente* p;
    nodo = primero;
    
    if(!nodo)
        return nullptr; 
        
    primero = nodo->siguiente;
    p = nodo->paciente; 
    delete nodo;
    
    if(!primero)
        ultimo = NULL;
        
    longitud--;
    return p; 
}

Paciente* Cola::verPrimero()
{
    if(!primero)
        return nullptr;
    return primero->paciente; 
}
int Cola::getLongitud(){
	return longitud;
}

Cola::~Cola()
{
    while (primero)
        eliminar();
}