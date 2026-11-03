#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

void insertar(Nodo*& inicio, int valor) {
    Nodo* nuevo = new Nodo;
    nuevo->dato = valor;
    nuevo->siguiente = nullptr;

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

void eliminar(Nodo*& inicio, int valor) {
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
        Nodo* borrar = auxiliar->siguiente;
        auxiliar->siguiente = borrar->siguiente;
        delete borrar;
        cout << "Elemento eliminado\n";
    }
}

void mostrar(Nodo* inicio) {
    if (inicio == nullptr) {
        cout << "La lista esta vacia\n";
        return;
    }

    while (inicio != nullptr) {
        cout << inicio->dato << " ";
        inicio = inicio->siguiente;
    }

    cout << endl;
}

void liberar(Nodo*& inicio) {
    while (inicio != nullptr) {
        Nodo* auxiliar = inicio;
        inicio = inicio->siguiente;
        delete auxiliar;
    }
}

int main() {
    Nodo* inicio = nullptr;
    int opcion, valor;

    do {
        cout << "\n1. Insertar\n2. Eliminar\n3. Mostrar\n4. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingresa un numero: ";
                cin >> valor;
                insertar(inicio, valor);
                break;
            case 2:
                cout << "Ingresa el valor a eliminar: ";
                cin >> valor;
                eliminar(inicio, valor);
                break;
            case 3:
                mostrar(inicio);
                break;
            case 4:
                cout << "Fin del programa\n";
                break;
            default:
                cout << "Opcion no valida\n";
        }
    } while (opcion != 4);

    liberar(inicio);
    return 0;
}
