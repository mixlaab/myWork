#include<iostream>
//#include<cstdlib>
//#include<cstring>

using namespace std;

string doTheSwap(string myArray, int start, int end);

int main(int argc, char const *argv[])
{
    string movie_1;
    cout << "Enter the name of the movie:" << endl;
    getline(cin,movie_1);
    int tam = movie_1.length();
    //Do the swap
    for (int ini = 0, fin = tam-1; ini < fin; ini++, fin--){
        movie_1 = doTheSwap(movie_1, ini, fin);
    }
    cout << "Tamaño del array: " << tam << endl;
    cout << movie_1 << endl;
    cout << "20/3 = " << 20/3.0 << endl; 

    //char *pmovie = malloc(tam);
    return 0;
}

string doTheSwap(string myArray, int start, int end){
    char temp;
    temp = myArray[start];
    myArray[start] = myArray[end];
    myArray[end] = temp;
    return myArray;
}

