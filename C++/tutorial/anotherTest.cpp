#include<iostream>

using namespace std;

int main(void){
    string phrase = "Victorcito";
    int tam = phrase.length();
    string reverse[tam+1];
    for (int i = 0; i <= tam; i++){
        reverse[i] = phrase[tam-i];
    }
    //reverse[6] = '\0';
    cout << phrase << endl;
    for (int i = 0; i <= tam; i++){
        cout << reverse[i] << endl;
    }
    cout << "Size of the array: " << tam << endl;
    cout << phrase.find("c", 4) << endl;
    //cout << reverse << endl;
}