#include <iostream>

using namespace std;

//Clase base
class Perro{

	public:
		string nombre;
		int edad;
		string raza;
		Perro(){
			darDatos();
		}

		void darDatos(){
			cout << "Insertar nombre: ";
                        getline(cin,nombre);
                        cout << "Insertar raza: ";
                        getline(cin,raza);
                        cout << "Insertar edad: ";
                        cin >> edad;
                        cout << endl;
                        cin.ignore();
		}

		void mostrarDatos(){
			cout << nombre << endl;
			cout << raza << endl;
			cout << edad << endl << endl;
		}

};

//Clase derivada
class Chihuahua: public Perro{

	public:
		void darDatos(){
			cout << "Insertar nombre: ";
	                getline(cin,nombre);
                	cambiarRaza();
                        cout << "Insertar edad: ";
                        cin >> edad;
                        cout << endl;
                        cin.ignore();

		}

		void cambiarRaza(){ 
			raza = "Chihuahua";
	        }
};

int main(){
	Perro p1;
	Perro p2;
	Chihuahua p3;

	p1.mostrarDatos();
	p2.mostrarDatos();
	p3.mostrarDatos();
}
