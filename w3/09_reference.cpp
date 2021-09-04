#include<iostream>
using namespace std;
int main()
{
    string name = "Mohiuddin";
    string &nameRef = name;
    name="Golam";
    cout<< &nameRef;
    //&nameRef in 'cout' represents the memory address
    return 0;
}

