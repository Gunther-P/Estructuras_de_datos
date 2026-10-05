#ifndef PACIENTE_HPP
#define PACIENTE_HPP

class Paciente {
private:
	bool enfermedad; 
	int ID;
	int numhabitacion;
	char dni[10];
public:
	Paciente();
	~Paciente();
	int getID();
	int getnumhabitacion();
	bool getenfermedad();
	void setID(int nuevoID);
	void setnumhabitacion (int nuevonumhabitacion);

	void mostrarPila();
	void mostrarCola();
};

#endif // PACIENTE_HPP
