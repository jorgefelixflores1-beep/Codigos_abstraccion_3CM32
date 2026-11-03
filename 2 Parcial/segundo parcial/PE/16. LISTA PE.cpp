#include <iostream>
#include <list>
using namespace std;

void insertar(list<int>& datos, int valor) {
    datos.push_back(valor);
}

void eliminar(list<int>& datos, int valor) {
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

void mostrar(const list<int>& datos) {
    if (datos.empty()) {
        cout << "La lista esta vacia\n";
    } else {
        for (int valor : datos) {
            cout << valor << endl;
        }
    }
}

int main() {
    list<int> datos;
    int opcion, valor;

    do {
        cout << "\n1. Insertar\n2. Eliminar\n3. Mostrar\n4. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingresa un numero: ";
                cin >> valor;
                insertar(datos, valor);
                break;

            case 2:
                cout << "Ingresa el numero a eliminar: ";
                cin >> valor;
                eliminar(datos, valor);
                break;

            case 3:
                mostrar(datos);
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
