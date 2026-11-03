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

class Cola {
private:
    Nodo* frente;
    Nodo* final;

public:
    Cola() {
        frente = nullptr;
        final = nullptr;
    }

    void insertar(int valor) {
        Nodo* nuevo = new Nodo(valor);

        if (frente == nullptr) {
            frente = nuevo;
            final = nuevo;
        } else {
            final->siguiente = nuevo;
            final = nuevo;
        }
    }

    void eliminar() {
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

    void mostrar() {
        Nodo* auxiliar = frente;

        if (auxiliar == nullptr) {
            cout << "La cola esta vacia\n";
        }

        while (auxiliar != nullptr) {
            cout << auxiliar->dato << " ";
            auxiliar = auxiliar->siguiente;
        }

        cout << endl;
    }

    ~Cola() {
        while (frente != nullptr) {
            Nodo* auxiliar = frente;
            frente = frente->siguiente;
            delete auxiliar;
        }
    }
};

int main() {
    Cola cola;
    int opcion, valor;

    do {
        cout << "\n1. Insertar\n2. Eliminar\n3. Mostrar\n4. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingresa un numero: ";
                cin >> valor;
                cola.insertar(valor);
                break;
            case 2:
                cola.eliminar();
                break;
            case 3:
                cola.mostrar();
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
