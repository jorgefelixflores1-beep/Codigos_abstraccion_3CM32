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

class Lista {
private:
    Nodo* inicio;

public:
    Lista() {
        inicio = nullptr;
    }

    void insertar(int valor) {
        Nodo* nuevo = new Nodo(valor);

        if (inicio == nullptr) {
            inicio = nuevo;
        } else {
            Nodo* auxiliar = inicio;

            while (auxiliar->siguiente != nullptr) {
                auxiliar = auxiliar->siguiente;
            }

            auxiliar->siguiente = nuevo;
        }
    }

    void eliminar(int valor) {
        if (inicio == nullptr) {
            cout << "La lista esta vacia\n";
            return;
        }

        if (inicio->dato == valor) {
            Nodo* auxiliar = inicio;
            inicio = inicio->siguiente;
            delete auxiliar;
            cout << "Elemento eliminado\n";
            return;
        }

        Nodo* auxiliar = inicio;

        while (auxiliar->siguiente != nullptr &&
               auxiliar->siguiente->dato != valor) {
            auxiliar = auxiliar->siguiente;
        }

        if (auxiliar->siguiente == nullptr) {
            cout << "Elemento no encontrado\n";
        } else {
            Nodo* eliminar = auxiliar->siguiente;
            auxiliar->siguiente = eliminar->siguiente;
            delete eliminar;
            cout << "Elemento eliminado\n";
        }
    }

    void mostrar() {
        Nodo* auxiliar = inicio;

        if (auxiliar == nullptr) {
            cout << "La lista esta vacia\n";
            return;
        }

        while (auxiliar != nullptr) {
            cout << auxiliar->dato << " ";
            auxiliar = auxiliar->siguiente;
        }

        cout << endl;
    }

    ~Lista() {
        while (inicio != nullptr) {
            Nodo* auxiliar = inicio;
            inicio = inicio->siguiente;
            delete auxiliar;
        }
    }
};

int main() {
    Lista lista;
    int opcion, valor;

    do {
        cout << "\n1. Insertar\n2. Eliminar\n3. Mostrar\n4. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingresa un numero: ";
                cin >> valor;
                lista.insertar(valor);
                break;
            case 2:
                cout << "Ingresa el valor a eliminar: ";
                cin >> valor;
                lista.eliminar(valor);
                break;
            case 3:
                lista.mostrar();
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
