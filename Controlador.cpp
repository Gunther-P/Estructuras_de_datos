#include "Controlador.hpp"

Controlador::Controlador()
{
    int i;
    for(i = 0; i < 300; i++)
        n_habitacion[i] = 0;
    for(i = 0; i < 100; i++)
        id[i] = 0;
}

Controlador::~Controlador()
{
    opcion_L();
}

int Controlador::pacientesEnPila()
{
    return Pila_pacientes.getLongitud();
}

int Controlador::pacientesEnSalaA()
{
    return Sala_A.getLongitud();
}

int Controlador::pacientesEnSalaB()
{
    return Sala_B.getLongitud();
}

int Controlador::pacientesEnSalaC()
{
    return Sala_C.getLongitud();
}

int Controlador::pacientesEnSalaD()
{
    return Sala_D.getLongitud();
}

int Controlador::pacientesEnListaApendicitis()
{
    return Lista_Apendicitis.getLongitud();
}

int Controlador::pacientesEnListaHernias()
{
    return Lista_Hernias.getLongitud();
}

int Controlador::pacientesEnArbol()
{
    return 0;
}

void Controlador::liberar(Paciente* p)
{
    if(p->get_ID() > 0)
        id[p->get_ID()] = 0;
    if(p->get_habitacion() > 0)
        n_habitacion[p->get_habitacion()] = 0;
    delete p;
}

void Controlador::vaciarCola(Cola& c)
{
    while(c.getLongitud() > 0)
        liberar(c.eliminar());
}

void Controlador::vaciarLista(Lista& l)
{
    while(l.getLongitud() > 0)
        liberar(l.eliminar());
}

int Controlador::generarID(Paciente* paciente)
{
    int minimo, numero;

    if(paciente->get_enfermedad())
        minimo = 51;
    else
        minimo = 1;

    do {
        numero = minimo + rand() % 49;
    } while(id[numero] != 0);

    id[numero] = 1;
    return numero;
}

int Controlador::generarnhabitacion(Paciente* paciente)
{
    int minimo, numero;

    if(paciente->get_enfermedad())
        minimo = 201;
    else
        minimo = 101;

    do {
        numero = minimo + rand() % 99;
    } while(n_habitacion[numero] != 0);

    n_habitacion[numero] = 1;
    return numero;
}

void Controlador::opcion_A()
{
    int i;
    int total = pacientesEnPila() + pacientesEnSalaA() + pacientesEnSalaB()
              + pacientesEnSalaC() + pacientesEnSalaD()
              + pacientesEnListaApendicitis() + pacientesEnListaHernias();

    if(pacientesEnPila() + 12 > 48 || total + 12 > 48) {
        cout << "No se pueden generar mas pacientes (maximo 48)" << endl;
        return;
    }

    for(i = 0; i < 12; i++)
        Pila_pacientes.insertar(new Paciente());
}

void Controlador::opcion_B()
{
    Pila_pacientes.mostrar();
}

void Controlador::opcion_C()
{
    Paciente* p;
    while(Pila_pacientes.getLongitud() > 0) {
        p = Pila_pacientes.extraer();
        liberar(p);
    }
}

void Controlador::opcion_D()
{
    Paciente* p;

    while(Pila_pacientes.getLongitud() > 0) {
        p = Pila_pacientes.extraer();
        p->set_ID(generarID(p));
        p->set_habitacion(generarnhabitacion(p));

        if(p->get_enfermedad()) {
            if(Sala_C.getLongitud() <= Sala_D.getLongitud())
                Sala_C.insertar(p);
            else
                Sala_D.insertar(p);
        } else {
            if(Sala_A.getLongitud() <= Sala_B.getLongitud())
                Sala_A.insertar(p);
            else
                Sala_B.insertar(p);
        }
    }
}

void Controlador::opcion_E()
{
    cout << " Sala A:" << endl;
    Sala_A.mostrar();
    cout << " Sala B:" << endl;
    Sala_B.mostrar();
}

void Controlador::opcion_F()
{
    cout << " Sala C:" << endl;
    Sala_C.mostrar();
    cout << " Sala D:" << endl;
    Sala_D.mostrar();
}

void Controlador::opcion_G()
{
    vaciarCola(Sala_A);
    vaciarCola(Sala_B);
    vaciarCola(Sala_C);
    vaciarCola(Sala_D);
}

void Controlador::opcion_H(){}
void Controlador::opcion_I(){}
void Controlador::opcion_J(){}
void Controlador::opcion_K(){}
void Controlador::opcion_L(){}
