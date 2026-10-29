#ifndef LISTA_HPP
#define LISTA_HPP

#include "NodoLista.hpp"
#include "Paciente.hpp"

class Lista
{
public:
    Lista();
    ~Lista();

    void insertar(Paciente* p);
    void insertarIzquierda(Paciente* p);
    void insertar(Paciente* p, int posicion);

    Paciente* eliminar();
    Paciente* eliminarUltimo();
    Paciente* eliminar(int posicion);
    Paciente* modificar(Paciente* p, int posicion);

    Paciente* verPrimero();
    Paciente* verUltimo();
    Paciente* coger(int posicion);
    int buscar(Paciente* p);
    bool esta(Paciente* p);
    bool estaVacia();
    int getLongitud();
    void mostrar();

private:
    pnodoLista primero, ultimo;
    int longitud;

};

#endif
