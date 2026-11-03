#include <iostream>
using namespace std;

class Cola {
private:
    int datos[5];
    int frente, final;

public:
    Cola() {
        frente = 0;
        final = -1;
    }

    void insertar(int valor) {
        if (final == 4) {
            cout << "La cola esta llena\n";
        } else {
            final++;
            datos[final] = valor;
        }
    }

    void eliminar() {
        if (frente > final) {
            cout << "La cola esta vacia\n";
        } else {
            cout << "Elemento eliminado: "
                 << datos[frente] << endl;
            frente++;
        }
    }

    void mostrar() {
        if (frente > final) {
            cout << "La cola esta vacia\n";
        } else {
            for (int i = frente; i <= final; i++) {
                cout << datos[i] << " ";
            }
            cout << endl;
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
