#include <iostream>
using namespace std;


class Pelicula{
	private:
		char nombre[50],genero[30];
		int year;
	public:
		//Constructor
		Pelicula(){
			cout <<  "Insertar nombre: ";
			cin.getline(nombre,50);
			cout << "Insertar ano: ";
			cin >> year;
			cin.ignore();
			cout << "Insertar genero: ";
			cin.getline(genero,30);
			cout << endl;
		}
		//Destructor
		~Pelicula(){
			datos();
		}

		void datos(){
			cout << nombre << endl;
			cout << year << endl;
			cout << genero << endl << endl;
		}
};

int main(int argc, char *argv[]){
	Pelicula p1;
	Pelicula p2;
	Pelicula p3;
}
