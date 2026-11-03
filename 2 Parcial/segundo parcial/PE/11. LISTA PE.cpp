#include <iostream>
using namespace std;

struct Lista {
    int datos[5];
    int cantidad;
};

void inicializar(Lista &lista) {
    lista.cantidad = 0;
}

void insertar(Lista &lista, int valor) {
    if (lista.cantidad == 5) {
        cout << "La lista esta llena\n";
    } else {
        lista.datos[lista.cantidad] = valor;
        lista.cantidad++;
    }
}

void eliminar(Lista &lista, int posicion) {
    if (posicion < 0 || posicion >= lista.cantidad) {
        cout << "Posicion no valida\n";
    } else {
        for (int i = posicion; i < lista.cantidad - 1; i++) {
            lista.datos[i] = lista.datos[i + 1];
        }
        lista.cantidad--;
        cout << "Elemento eliminado\n";
    }
}

void mostrar(Lista lista) {
    if (lista.cantidad == 0) {
        cout << "La lista esta vacia\n";
    } else {
        for (int i = 0; i < lista.cantidad; i++) {
            cout << lista.datos[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    Lista lista;
    int opcion, valor, posicion;

    inicializar(lista);

    do {
        cout << "\n1. Insertar\n2. Eliminar\n3. Mostrar\n4. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingresa un numero: ";
                cin >> valor;
                insertar(lista, valor);
                break;
            case 2:
                cout << "Posicion a eliminar (0-4): ";
                cin >> posicion;
                eliminar(lista, posicion);
                break;
            case 3:
                mostrar(lista);
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
