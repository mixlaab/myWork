#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 5; //creating an integer
    int *p_a = &a;

    cout << "Name:\t" << "Value:\t" << "Address:" << endl;
    cout << "a\t" << a << "\t" << p_a << endl;
    cout << "p_a\t" << p_a << "\t" << &p_a << endl;
    return 0;
}
