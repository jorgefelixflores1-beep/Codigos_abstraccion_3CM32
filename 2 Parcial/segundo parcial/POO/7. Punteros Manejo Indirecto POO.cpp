#include <iostream>
using namespace std;

class Persona {
public:
    char nombre[30];
    int edad;
    Persona* siguiente;
};

int main() {
    Persona personas[3];

    for (int i = 0; i < 3; i++) {
        cout << "Nombre: ";
        cin >> personas[i].nombre;

        cout << "Edad: ";
        cin >> personas[i].edad;

        if (i < 2)
            personas[i].siguiente = &personas[i + 1];
        else
            personas[i].siguiente = nullptr;
    }

    Persona* actual = &personas[0];

    cout << "\nLISTA DE PERSONAS\n";

    while (actual != nullptr) {
        cout << "Nombre: " << actual->nombre << endl;
        cout << "Edad: " << actual->edad << endl;
        actual = actual->siguiente;
    }

    return 0;
}
