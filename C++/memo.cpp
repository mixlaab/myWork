#include <iostream>

using namespace std;

int main(int argc, char *argv[]){

	int a; //a es una variable
	int *p; //p es un apuntador (allocated memory)
	int i; //contador
	
	cout << "Enter size of array: ";
	cin >> a;	
	p = new int[a];
	
	for(i = 0; i < a; i++){
		p[i] = i * i;
	}

	for(i = 0; i < a; i++){
		cout << "p[" << i << "] = " << p[i] << endl;
	}

	delete[] p;

	return 0;

}
