#include "NodoPila.hpp"

NodoPila::NodoPila(Paciente p, NodoPila*sig) : valor(p)
{
    siguiente = sig;
    
    }
NodoPila::~NodoPila()
{
}