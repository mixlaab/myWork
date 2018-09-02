#include <iostream>

using namespace std;

class Persona{
	private:
		string nombre;
		int edad;
		double estatura;
	public:
		Persona(){
			cout << "Insertar nombre: ";
			cin >> nombre;
			cout << endl;
			cout << "Insertar edad: ";
                        cin >> edad;
                        cout << endl;
			cout << "Insertar estatura: ";
                        cin >> estatura;
                        cout << endl;
		}

		Persona(string tempN, int tempE, double tempH){
                        nombre = tempN;
                        edad = tempE;
                        estatura = tempH;
                }

		~Persona(){
                        cout << "Adios " << nombre << endl;
                }

		void verDatos(){
			cout << nombre << endl;
			cout << edad << endl;
			cout << estatura << endl;
		}
};

int main(){
	Persona p("Víctor",20, 1.76);
	//p = new Persona("Victor", 20, 1.76);
	p.verDatos();
}
