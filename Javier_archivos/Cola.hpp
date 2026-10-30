#include "NodoCola.hpp"
#include "Paciente.hpp"

class Cola
{
public:
    Cola();
    ~Cola();
    void insertar(Paciente* p);
    Paciente* eliminar();
    void mostrar();
    Paciente* verPrimero();
	int getLongitud();
private:
    pnodoCola primero, ultimo;
    int longitud;
};
