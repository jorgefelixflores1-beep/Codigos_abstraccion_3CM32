#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

void insertar(Nodo*& tope, int valor) {
    Nodo* nuevo = new Nodo;
    nuevo->dato = valor;
    nuevo->siguiente = tope;
    tope = nuevo;
}

void eliminar(Nodo*& tope) {
    if (tope == nullptr) {
        cout << "La pila esta vacia\n";
    } else {
        Nodo* auxiliar = tope;
        cout << "Elemento eliminado: "
             << auxiliar->dato << endl;
        tope = tope->siguiente;
        delete auxiliar;
    }
}

void mostrar(Nodo* tope) {
    if (tope == nullptr) {
        cout << "La pila esta vacia\n";
    }

    while (tope != nullptr) {
        cout << tope->dato << endl;
        tope = tope->siguiente;
    }
}

void liberar(Nodo*& tope) {
    while (tope != nullptr) {
        Nodo* auxiliar = tope;
        tope = tope->siguiente;
        delete auxiliar;
    }
}

int main() {
    Nodo* tope = nullptr;
    int opcion, valor;

    do {
        cout << "\n1. Insertar\n2. Eliminar\n3. Mostrar\n4. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingresa un numero: ";
                cin >> valor;
                insertar(tope, valor);
                break;
            case 2:
                eliminar(tope);
                break;
            case 3:
                mostrar(tope);
                break;
            case 4:
                cout << "Fin del programa\n";
                break;
            default:
                cout << "Opcion no valida\n";
        }
    } while (opcion != 4);

    liberar(tope);
    return 0;
}
