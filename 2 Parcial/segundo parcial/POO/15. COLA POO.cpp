#include <iostream>
#include <queue>
using namespace std;

class Cola {
private:
    queue<int> datos;

public:
    void insertar(int valor) {
        datos.push(valor);
    }

    void eliminar() {
        if (datos.empty()) {
            cout << "La cola esta vacia\n";
        } else {
            cout << "Elemento eliminado: " << datos.front() << endl;
            datos.pop();
        }
    }

    void mostrar() {
        if (datos.empty()) {
            cout << "La cola esta vacia\n";
        } else {
            queue<int> auxiliar = datos;

            while (!auxiliar.empty()) {
                cout << auxiliar.front() << endl;
                auxiliar.pop();
            }
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
