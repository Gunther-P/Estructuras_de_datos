#include <iostream>
#include "Paciente.hpp"
using namespace std;

class NodoCola
{
public:
    NodoCola(Paciente* p, NodoCola* sig = NULL);
    ~NodoCola();
private:
    Paciente* paciente;
    NodoCola* siguiente;
    friend class Cola;
};
typedef NodoCola* pnodoCola;
