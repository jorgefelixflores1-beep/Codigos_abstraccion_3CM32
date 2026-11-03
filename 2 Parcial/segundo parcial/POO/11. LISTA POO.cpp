#include <iostream>
using namespace std;

class Lista {
private:
    int datos[5];
    int cantidad;

public:
    Lista() {
        cantidad = 0;
    }

    void insertar(int valor) {
        if (cantidad == 5) {
            cout << "La lista esta llena\n";
        } else {
            datos[cantidad] = valor;
            cantidad++;
        }
    }

    void eliminar(int posicion) {
        if (posicion < 0 || posicion >= cantidad) {
            cout << "Posicion no valida\n";
        } else {
            for (int i = posicion; i < cantidad - 1; i++) {
                datos[i] = datos[i + 1];
            }
            cantidad--;
            cout << "Elemento eliminado\n";
        }
    }

    void mostrar() {
        if (cantidad == 0) {
            cout << "La lista esta vacia\n";
        } else {
            for (int i = 0; i < cantidad; i++) {
                cout << datos[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Lista lista;
    int opcion, valor, posicion;

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
                cout << "Posicion a eliminar (0-4): ";
                cin >> posicion;
                lista.eliminar(posicion);
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
