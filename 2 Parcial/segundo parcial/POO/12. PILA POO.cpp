#include <iostream>
using namespace std;

class Nodo {
public:
    int dato;
    Nodo* siguiente;

    Nodo(int valor) {
        dato = valor;
        siguiente = nullptr;
    }
};

class Pila {
private:
    Nodo* tope;

public:
    Pila() {
        tope = nullptr;
    }

    void insertar(int valor) {
        Nodo* nuevo = new Nodo(valor);
        nuevo->siguiente = tope;
        tope = nuevo;
    }

    void eliminar() {
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

    void mostrar() {
        Nodo* auxiliar = tope;

        if (auxiliar == nullptr) {
            cout << "La pila esta vacia\n";
        }

        while (auxiliar != nullptr) {
            cout << auxiliar->dato << endl;
            auxiliar = auxiliar->siguiente;
        }
    }

    ~Pila() {
        while (tope != nullptr) {
            Nodo* auxiliar = tope;
            tope = tope->siguiente;
            delete auxiliar;
        }
    }
};

int main() {
    Pila pila;
    int opcion, valor;

    do {
        cout << "\n1. Insertar\n2. Eliminar\n3. Mostrar\n4. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingresa un numero: ";
                cin >> valor;
                pila.insertar(valor);
                break;
            case 2:
                pila.eliminar();
                break;
            case 3:
                pila.mostrar();
                break;
            case 4:
                cout << "Fin del programa\n";
                break;
            default:
                cout << "Opcion no valida\n";
        }
    } while (opcion != 4);

    return 0;
}
