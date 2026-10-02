#include <iostream>
#include <string>
using namespace std;

class Paciente {
        public:
        Paciente();
        Paciente(string dni, bool hernia);
        void mostrar() const;
        

    private:
        string dni;
        bool hernia;
        void generarDni();
        bool generarHernia();
    };
    
