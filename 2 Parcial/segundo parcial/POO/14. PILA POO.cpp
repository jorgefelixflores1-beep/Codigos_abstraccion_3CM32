#include <iostream>
#include <stack>
using namespace std;

class Pila {
private:
    stack<int> datos;

public:
    void insertar(int valor) {
        datos.push(valor);
    }

    void eliminar() {
        if (datos.empty()) {
            cout << "La pila esta vacia\n";
        } else {
            cout << "Elemento eliminado: " << datos.top() << endl;
            datos.pop();
        }
    }

    void mostrar() {
        if (datos.empty()) {
            cout << "La pila esta vacia\n";
        } else {
            stack<int> auxiliar = datos;

            while (!auxiliar.empty()) {
                cout << auxiliar.top() << endl;
                auxiliar.pop();
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
