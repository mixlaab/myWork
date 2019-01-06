#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int age;
    cout << "How old are you?" << endl;
    cin >> age;

    if(age < 18){
        cout << "You're underage" << endl;
    }
    else {
        cout << "You're a grown man" << endl;
    }
    return 0;
}
