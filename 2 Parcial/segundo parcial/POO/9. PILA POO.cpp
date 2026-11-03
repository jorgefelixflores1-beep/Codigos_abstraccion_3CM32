#include <iostream>
using namespace std;

class Pila {
private:
    int datos[5];
    int tope;

public:
    Pila() {
        tope = -1;
    }

    void insertar(int valor) {
        if (tope == 4) {
            cout << "La pila esta llena\n";
        } else {
            tope++;
            datos[tope] = valor;
        }
    }

    void eliminar() {
        if (tope == -1) {
            cout << "La pila esta vacia\n";
        } else {
            cout << "Elemento eliminado: " << datos[tope] << endl;
            tope--;
        }
    }

    void mostrar() {
        if (tope == -1) {
            cout << "La pila esta vacia\n";
        } else {
            for (int i = tope; i >= 0; i--) {
                cout << datos[i] << endl;
            }
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
