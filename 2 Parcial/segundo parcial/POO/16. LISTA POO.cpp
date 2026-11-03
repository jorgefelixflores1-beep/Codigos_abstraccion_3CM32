#include <iostream>
#include <list>
using namespace std;

class Lista {
private:
    list<int> datos;

public:
    void insertar(int valor) {
        datos.push_back(valor);
    }

    void eliminar(int valor) {
        auto it = datos.begin();

        while (it != datos.end() && *it != valor) {
            ++it;
        }

        if (it != datos.end()) {
            datos.erase(it);
            cout << "Elemento eliminado\n";
        } else {
            cout << "Elemento no encontrado\n";
        }
    }

    void mostrar() {
        if (datos.empty()) {
            cout << "La lista esta vacia\n";
        } else {
            for (int valor : datos) {
                cout << valor << endl;
            }
        }
    }
};

int main() {
    Lista lista;
    int opcion, valor;

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
                cout << "Ingresa el numero a eliminar: ";
                cin >> valor;
                lista.eliminar(valor);
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
