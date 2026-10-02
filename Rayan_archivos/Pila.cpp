#include "Pila.hpp"

Pila::Pila()
{
    ultimo = NULL;
    longitud = 0;
}


void Pila::insertar(Paciente p)
{
    pnodoPila nuevo;
    nuevo = new NodoPila(p, ultimo);
    ultimo = nuevo;
    longitud++;
}

Paciente Pila::extraer()
{
    if (!ultimo) return Paciente();
    pnodoPila nodo = ultimo;
    Paciente v(nodo->valor);
    ultimo = nodo->siguiente;
    longitud--;
    delete nodo;
    return v;
}

Paciente Pila::cima()
{
    if(!ultimo) return Paciente();
    return ultimo->valor;
}

void Pila::mostrar()
{
    pnodoPila aux = ultimo;
    cout << "\tEl contenido de la pila es: ";
    while (aux) {
        cout << "->";
        aux->valor.mostrar();
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