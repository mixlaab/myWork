#include <iostream>

using namespace std;

struct Persona{
	string nombre;
	int edad;
	float salario;

	Persona();
	Persona(string tempN, int tempE, float tempS);
	~Persona();
	void imprime();	
};

int main(){
	Persona *v,*c,*l;
	v = new Persona("Víctor",24,5000.68);
	c = new Persona;
	l = new Persona;
	c->nombre = "Carolina";
	c->edad = 22;
	c->salario = 3000.73;
	v->imprime();
	c->imprime();
	l->imprime();
	delete v;
	delete l;
	return 0;
}

Persona::Persona(){
	nombre = "";
	edad = 0;
	salario = 0.0;
}

Persona::Persona(string tempN, int tempE, float tempS){
	nombre = tempN;
	edad = tempE;
	salario = tempS;
}

Persona::~Persona(){
	cout << "Adios " << nombre << endl;
}

void Persona::imprime(){
	cout << nombre << endl;
	cout << edad << endl;
	cout << salario << endl << endl;
}

