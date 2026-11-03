#include <iostream>
#include <string>
using namespace std;

class Auto {
public:
    double precio;
    int anio;
};

class Persona {
public:
    string nombre;
    string ap;
    string am;
    string genero;
    int edad;
};

int main() {
    cout << "TAMANOS DE TIPOS DE DATOS BASICOS" << endl;
    cout << "char: " << sizeof(char) << " bytes" << endl;
    cout << "bool: " << sizeof(bool) << " bytes" << endl;
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "float: " << sizeof(float) << " bytes" << endl;
    cout << "double: " << sizeof(double) << " bytes" << endl;
    cout << "long: " << sizeof(long) << " bytes" << endl;

    cout << "\nTAMANOS DE TIPOS CREADOS EN POO" << endl;
    cout << "Auto: " << sizeof(Auto) << " bytes" << endl;
    cout << "Persona: " << sizeof(Persona) << " bytes" << endl;

    return 0;
}

