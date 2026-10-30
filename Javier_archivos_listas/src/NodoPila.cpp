#include "NodoPila.hpp"

NodoPila::NodoPila(Paciente* p, NodoPila*sig) : valor(p)
{
	valor = p;
	siguiente = sig;
    
    }
NodoPila::~NodoPila()
{
}