#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

void insertar(Nodo*& frente, Nodo*& final, int valor) {
    Nodo* nuevo = new Nodo;
    nuevo->dato = valor;
    nuevo->siguiente = nullptr;

    if (frente == nullptr) {
        frente = nuevo;
        final = nuevo;
    } else {
        final->siguiente = nuevo;
        final = nuevo;
    }
}

void eliminar(Nodo*& frente, Nodo*& final) {
    if (frente == nullptr) {
        cout << "La cola esta vacia\n";
    } else {
        Nodo* auxiliar = frente;
        cout << "Elemento eliminado: " << auxiliar->dato << endl;
        frente = frente->siguiente;

        if (frente == nullptr) {
            final = nullptr;
        }

        delete auxiliar;
    }
}

void mostrar(Nodo* frente) {
    if (frente == nullptr) {
        cout << "La cola esta vacia\n";
    }

    while (frente != nullptr) {
        cout << frente->dato << " ";
        frente = frente->siguiente;
    }

    cout << endl;
}

void liberar(Nodo*& frente, Nodo*& final) {
    while (frente != nullptr) {
        Nodo* auxiliar = frente;
        frente = frente->siguiente;
        delete auxiliar;
    }

    final = nullptr;
}

int main() {
    Nodo* frente = nullptr;
    Nodo* final = nullptr;
    int opcion, valor;

    do {
        cout << "\n1. Insertar\n2. Eliminar\n3. Mostrar\n4. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingresa un numero: ";
                cin >> valor;
                insertar(frente, final, valor);
                break;
            case 2:
                eliminar(frente, final);
                break;
            case 3:
                mostrar(frente);
                break;
            case 4:
                cout << "Fin del programa\n";
                break;
            default:
                cout << "Opcion no valida\n";
        }
    } while (opcion != 4);

    liberar(frente, final);
    return 0;
}
