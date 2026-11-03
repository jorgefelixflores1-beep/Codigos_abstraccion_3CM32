#include <iostream>
using namespace std;

class Ordenamiento {
public:
    int numeros[5];

    void ingresar() {
        for (int i = 0; i < 5; i++) {
            cout << "Ingresa el numero " << i + 1 << ": ";
            cin >> numeros[i];
        }
    }

    void ordenar() {
        int aux;

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4 - i; j++) {
                if (numeros[j] > numeros[j + 1]) {
                    aux = numeros[j];
                    numeros[j] = numeros[j + 1];
                    numeros[j + 1] = aux;
                }
            }
        }
    }

    void mostrar() {
        cout << "Numeros ordenados: ";
        for (int i = 0; i < 5; i++) {
            cout << numeros[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Ordenamiento objeto;

    objeto.ingresar();
    objeto.ordenar();
    objeto.mostrar();

    return 0;
}

