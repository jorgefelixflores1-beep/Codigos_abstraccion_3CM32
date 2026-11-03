#include <iostream>
using namespace std;

struct Cola {
    int datos[5];
    int frente, final;
};

void inicializar(Cola &cola) {
    cola.frente = 0;
    cola.final = -1;
}

void insertar(Cola &cola, int valor) {
    if (cola.final == 4) {
        cout << "La cola esta llena\n";
    } else {
        cola.final++;
        cola.datos[cola.final] = valor;
    }
}

void eliminar(Cola &cola) {
    if (cola.frente > cola.final) {
        cout << "La cola esta vacia\n";
    } else {
        cout << "Elemento eliminado: "
             << cola.datos[cola.frente] << endl;
        cola.frente++;
    }
}

void mostrar(Cola cola) {
    if (cola.frente > cola.final) {
        cout << "La cola esta vacia\n";
    } else {
        for (int i = cola.frente; i <= cola.final; i++) {
            cout << cola.datos[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    Cola cola;
    int opcion, valor;

    inicializar(cola);

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
