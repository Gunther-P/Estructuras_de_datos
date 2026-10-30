#include "Lista.hpp"

Lista::Lista() {
    primero = NULL;
    ultimo = NULL;
    longitud = 0;
    }
    
Lista::~Lista()
{
    while(primero)
        eliminar();
}
void Lista::insertarOrdenado (Paciente* p) {
    pnodoLista nuevo;
    nuevo = new NodoLista(p);
    if (!primero) {
        primero = nuevo;
        ultimo = nuevo;
        }
    else if (p -> get_ID() > primero-> valor -> get_ID()) {
        nuevo -> siguiente = primero;
        primero->anterior = nuevo;
        primero = nuevo;
        }
    else if (p ->get_ID() <= ultimo -> valor -> get_ID()) {
        nuevo->anterior = ultimo;
        ultimo->siguiente = nuevo;
        ultimo = nuevo;
        }
    
    else {
        pnodoLista aux = primero -> siguiente;
        while (aux->valor->get_ID() >= p->get_ID()){
             aux = aux ->siguiente;
        }
             nuevo->siguiente = aux;
             nuevo->anterior = aux->anterior;
             aux->anterior->siguiente = nuevo;
             aux->anterior = nuevo;
            
        
        }
    longitud++;
}

void Lista::mostrar()
{
    pnodoLista aux = primero;
    while(aux) {
        aux->valor->mostrar();
        aux = aux->siguiente;
    }
    cout << endl;
}

Paciente* Lista::verUltimo()
{
    if(!ultimo) return nullptr;
    return ultimo->valor;
}

Paciente* Lista::verPrimero() {
    if (!primero) return nullptr;
    return primero -> valor;
    }
void Lista::insertarColaLista(Cola& c) {
    while(c.getLongitud() > 0) {
        insertarOrdenado(c.eliminar());
    }
}

Paciente* Lista::eliminar()
{
    pnodoLista nodo = primero;
    Paciente* p;

    if(!nodo) return nullptr;

    primero = nodo->siguiente;
    if(primero){
        primero->anterior = NULL;
    }
    else {
        ultimo = NULL;
    }
    p = nodo->valor;
    delete nodo;
    longitud--;
    return p;
}

int Lista::getLongitud()
{
    return longitud;
}