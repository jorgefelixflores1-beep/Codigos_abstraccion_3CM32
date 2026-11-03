#include <iostream>
#include <stack>
using namespace std;

void insertar(stack<int>& pila, int valor) {
    pila.push(valor);
}

void eliminar(stack<int>& pila) {
    if (pila.empty()) {
        cout << "La pila esta vacia\n";
    } else {
        cout << "Elemento eliminado: " << pila.top() << endl;
        pila.pop();
    }
}

void mostrar(stack<int> pila) {
    if (pila.empty()) {
        cout << "La pila esta vacia\n";
    } else {
        while (!pila.empty()) {
            cout << pila.top() << endl;
            pila.pop();
        }
    }
}

int main() {
    stack<int> pila;
    int opcion, valor;

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
