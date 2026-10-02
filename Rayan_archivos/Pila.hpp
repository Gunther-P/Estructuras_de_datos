#include "NodoPila.hpp"
class Pila
{
public:
    Pila();
    ~Pila();
    void insertar(Paciente p);
    Paciente extraer();
    Paciente cima();
    void mostrar();
    int getLongitud();

private:
    pnodoPila ultimo;
    int longitud;
};

