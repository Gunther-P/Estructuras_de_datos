#include "Lista.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;

Lista::Lista()
{
    primero = NULL;
    ultimo = NULL;
    longitud = 0;
}

void Lista::insertar(Paciente* p)
{
    insertar(p, longitud + 1);
}

void Lista::insertarIzquierda(Paciente* p)
{
    insertar(p, 1);
}

void Lista::insertar(Paciente* p, int posicion)
{

    pnodoLista nuevo = new NodoLista(p);

    if(posicion == 1) {
        nuevo->siguiente = primero;
        primero = nuevo;
        if(!ultimo)
            ultimo = nuevo;
    }
    else if(posicion == longitud + 1) {
        ultimo->siguiente = nuevo;
        ultimo = nuevo;
    }
    else {
        pnodoLista aux = primero;
        for(int i = 1; i < posicion - 1; i++)
            aux = aux->siguiente;

        nuevo->siguiente = aux->siguiente;
        aux->siguiente = nuevo;
    }
    longitud++;
}

Paciente* Lista::eliminar()
{
    if(!primero)
        return nullptr;
    return eliminar(1);
}

Paciente* Lista::eliminarUltimo()
{
    if(!ultimo)
        return nullptr;
    return eliminar(longitud);
}

Paciente* Lista::eliminar(int posicion)
{
    pnodoLista nodo;

    if(posicion == 1) {
        nodo = primero;
        primero = primero->siguiente;
        if(!primero)
            ultimo = NULL;
    }
    else {
        pnodoLista aux = primero;
        for(int i = 1; i < posicion - 1; i++)
            aux = aux->siguiente;

        nodo = aux->siguiente;
        aux->siguiente = nodo->siguiente;
        if(nodo == ultimo)
            ultimo = aux;
    }

    Paciente* p = nodo->paciente;
    nodo->siguiente = NULL;
    delete nodo;
    longitud--;
    return p;
}

Paciente* Lista::verPrimero() 
{
    if(!primero)
        return nullptr;
    return primero->paciente;
}

Paciente* Lista::verUltimo() 
{
    if(!ultimo)
        return nullptr;
    return ultimo->paciente;
}

Paciente* Lista::coger(int posicion)
{
    pnodoLista aux = primero;
    for(int i = 1; i < posicion; i++)
        aux = aux->siguiente;
    return aux->paciente;
}

Paciente* Lista::modificar(Paciente* p, int posicion)
{
    pnodoLista aux = primero;
    for(int i = 1; i < posicion; i++)
        aux = aux->siguiente;

    Paciente* anterior = aux->paciente;
    aux->paciente = p;
    return anterior;
}

int Lista::buscar(Paciente* p) 
{
    pnodoLista aux = primero;
    int posicion = 1;
    while(aux) {
        if(aux->paciente == p)
            return posicion;
        aux = aux->siguiente;
        posicion++;
    }
    return 0;
}

bool Lista::esta(Paciente* p) 
{
    return buscar(p) != 0;
}

bool Lista::estaVacia() 
{
    return primero == NULL;
}

int Lista::getLongitud() 
{
    return longitud;
}

void Lista::mostrar() 
{
    pnodoLista aux = primero;
    while(aux) {
        if(aux->paciente)
            aux->paciente->mostrar();
        aux = aux->siguiente;
    }
    cout << endl;
}

Lista::~Lista()
{
    while(primero)
        eliminar();
}
