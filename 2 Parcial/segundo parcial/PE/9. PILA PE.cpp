#include <iostream>
using namespace std;

struct Pila {
    int datos[5];
    int tope;
};

void inicializar(Pila &pila) {
    pila.tope = -1;
}

void insertar(Pila &pila, int valor) {
    if (pila.tope == 4) {
        cout << "La pila esta llena\n";
    } else {
        pila.tope++;
        pila.datos[pila.tope] = valor;
    }
}

void eliminar(Pila &pila) {
    if (pila.tope == -1) {
        cout << "La pila esta vacia\n";
    } else {
        cout << "Elemento eliminado: "
             << pila.datos[pila.tope] << endl;
        pila.tope--;
    }
}

void mostrar(Pila pila) {
    if (pila.tope == -1) {
        cout << "La pila esta vacia\n";
    } else {
        for (int i = pila.tope; i >= 0; i--) {
            cout << pila.datos[i] << endl;
        }
    }
}

int main() {
    Pila pila;
    int opcion, valor;

    inicializar(pila);

    do {
        cout << "\n1. Insertar\n2. Eliminar\n3. Mostrar\n4. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingresa un numero: ";
                cin >> valor;
                insertar(pila, valor);
                break;
            case 2:
                eliminar(pila);
                break;
            case 3:
                mostrar(pila);
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
