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

void Controlador::opcion_H()
{
    Paciente* p;

    while(Sala_A.getLongitud() > 0 || Sala_B.getLongitud() > 0) {
        if(Sala_A.getLongitud() > 0) {
            p = Sala_A.eliminar();
            Lista_Apendicitis.insertar(p);
        }

        if(Sala_B.getLongitud() > 0) {
            p = Sala_B.eliminar();
            Lista_Apendicitis.insertar(p);
        }
    }

    while(Sala_C.getLongitud() > 0 || Sala_D.getLongitud() > 0) {
        if(Sala_C.getLongitud() > 0) {
            p = Sala_C.eliminar();
            Lista_Hernias.insertar(p);
        }

        if(Sala_D.getLongitud() > 0) {
            p = Sala_D.eliminar();
            Lista_Hernias.insertar(p);
        }
    }
}
void Controlador::opcion_I()
{
	Lista_Apendicitis.mostrar();
}
void Controlador::opcion_J()
{
    Lista_Hernias.mostrar();
}

void Controlador::opcion_K()
{
    Paciente* menorApendicitis = nullptr;
    Paciente* mayorHernias = nullptr;
    Paciente* p;

    for(int i = 1; i <= Lista_Apendicitis.getLongitud(); i++) {
        p = Lista_Apendicitis.coger(i);

        if(menorApendicitis == nullptr || p->get_ID() < menorApendicitis->get_ID())
            menorApendicitis = p;
    }

    for(int i = 1; i <= Lista_Hernias.getLongitud(); i++) {
        p = Lista_Hernias.coger(i);

        if(mayorHernias == nullptr ||
           p->get_ID() > mayorHernias->get_ID())
            mayorHernias = p;
    }

    cout << "Apendicitis menor prioridad ->       ";
	menorApendicitis->mostrar();
    cout << "Hernias mayor prioridad ->           ";
    mayorHernias->mostrar();
}


void Controlador::opcion_L()
{
    while(Pila_pacientes.getLongitud() > 0)
        liberar(Pila_pacientes.extraer());

    while(aux.getLongitud() > 0)
        liberar(aux.extraer());

    vaciarCola(Sala_A);
    vaciarCola(Sala_B);
    vaciarCola(Sala_C);
    vaciarCola(Sala_D);

    vaciarLista(Lista_Apendicitis);
    vaciarLista(Lista_Hernias);

    for(int i = 0; i < 100; i++)
        id[i] = 0;

    for(int i = 0; i < 300; i++)
        n_habitacion[i] = 0;
}
