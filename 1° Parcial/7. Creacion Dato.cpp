#include <iostream>
#include <string>
using namespace std;

class Auto {
public:
    string precio;
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
    Auto auto1;
    Persona persona1;

    cout << "DATOS DEL AUTO" << endl;
    cout << "Precio: ";
    cin >> auto1.precio;
    cout << "Anio: ";
    cin >> auto1.anio;

    cout << "\nDATOS DE LA PERSONA" << endl;
    cin.ignore();

    cout << "Nombre: ";
    getline(cin, persona1.nombre);

    cout << "Apellido paterno: ";
    getline(cin, persona1.ap);

    cout << "Apellido materno: ";
    getline(cin, persona1.am);

    cout << "Genero: ";
    getline(cin, persona1.genero);

    cout << "Edad: ";
    cin >> persona1.edad;

    cout << "\nDATOS REGISTRADOS" << endl;

    cout << "AUTO: " << auto1.precio
         << ", Anio: " << auto1.anio << endl;

    cout << "PERSONA: " << persona1.nombre << " "
         << persona1.ap << " " << persona1.am
         << ", Genero: " << persona1.genero
         << ", Edad: " << persona1.edad << endl;

    return 0;
}


