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
    Auto coches[3];
    Persona personas[3];

    Persona *puntero = personas;

    cout << "REGISTRO DE COCHES" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "\nCOCHE " << i + 1 << endl;
        cout << "Precio: ";
        cin >> coches[i].precio;
        cout << "Anio: ";
        cin >> coches[i].anio;
    }

    cout << "\nREGISTRO DE PERSONAS" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "\nPERSONA " << i + 1 << endl;
        cout << "Nombre: ";
        cin >> (puntero + i)->nombre;
        cout << "Apellido paterno: ";
        cin >> (puntero + i)->ap;
        cout << "Apellido materno: ";
        cin >> (puntero + i)->am;
        cout << "Genero: ";
        cin >> (puntero + i)->genero;
        cout << "Edad: ";
        cin >> (puntero + i)->edad;
    }

    cout << "\nLISTA DE COCHES" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "Coche " << i + 1
             << " - Precio: " << coches[i].precio
             << ", Anio: " << coches[i].anio << endl;
    }

    cout << "\nLISTA DE PERSONAS" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "Persona " << i + 1 << ": "
             << (puntero + i)->nombre << " "
             << (puntero + i)->ap << " "
             << (puntero + i)->am
             << ", Genero: " << (puntero + i)->genero
             << ", Edad: " << (puntero + i)->edad << endl;
    }

    return 0;
}

