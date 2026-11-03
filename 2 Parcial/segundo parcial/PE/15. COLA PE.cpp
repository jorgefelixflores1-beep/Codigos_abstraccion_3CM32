#include <iostream>
#include <queue>
using namespace std;

void insertar(queue<int>& cola, int valor) {
    cola.push(valor);
}

void eliminar(queue<int>& cola) {
    if (cola.empty()) {
        cout << "La cola esta vacia\n";
    } else {
        cout << "Elemento eliminado: " << cola.front() << endl;
        cola.pop();
    }
}

void mostrar(queue<int> cola) {
    if (cola.empty()) {
        cout << "La cola esta vacia\n";
    } else {
        while (!cola.empty()) {
            cout << cola.front() << endl;
            cola.pop();
        }
    }
}

int main() {
    queue<int> cola;
    int opcion, valor;

    do {
        cout << "\n1. Insertar\n2. Eliminar\n3. Mostrar\n4. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingresa un numero: ";
                cin >> valor;
                insertar(cola, valor);
                break;

            case 2:
                eliminar(cola);
                break;

            case 3:
                mostrar(cola);
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
