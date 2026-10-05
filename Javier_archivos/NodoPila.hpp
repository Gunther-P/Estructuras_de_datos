#include <iostream>
#include "Paciente.hpp"
using namespace std;

class NodoPila
{
public:
    NodoPila(Paciente* p, NodoPila* sig = NULL);
    ~NodoPila();
private:
	Paciente* paciente;
    NodoPila* siguiente;
    friend class Pila;
	friend class Paciente;
};
typedef NodoPila* pnodoPila;
