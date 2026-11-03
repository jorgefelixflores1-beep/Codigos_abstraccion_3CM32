#include <iostream>
using namespace std;

class Matrices {
public:
    int A[2][2], B[2][2], resultado[2][2];

    void ingresarA() {
        cout << "INGRESA LOS ELEMENTOS DE LA MATRIZ A" << endl;

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << "A[" << i << "][" << j << "]: ";
                cin >> A[i][j];
            }
        }
    }

    void ingresarB() {
        cout << "\nINGRESA LOS ELEMENTOS DE LA MATRIZ B" << endl;

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << "B[" << i << "][" << j << "]: ";
                cin >> B[i][j];
            }
        }
    }

    void multiplicarConstante(int constante) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                resultado[i][j] = A[i][j] * constante;
            }
        }
    }

    void multiplicarMatrices() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                resultado[i][j] = 0;

                for (int k = 0; k < 2; k++) {
                    resultado[i][j] += A[i][k] * B[k][j];
                }
            }
        }
    }

    void mostrarResultado() {
        cout << "\nMATRIZ RESULTADO" << endl;

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << resultado[i][j] << "\t";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrices objeto;
    int constante, opcion;

    objeto.ingresarA();

    cout << "\n1. A * constante" << endl;
    cout << "2. A * B" << endl;
    cout << "Selecciona una opcion: ";
    cin >> opcion;

    if (opcion == 1) {
        cout << "Ingresa la constante: ";
        cin >> constante;

        objeto.multiplicarConstante(constante);
    }
    else if (opcion == 2) {
        objeto.ingresarB();
        objeto.multiplicarMatrices();
    }
    else {
        cout << "Opcion no valida." << endl;
        return 0;
    }

    objeto.mostrarResultado();

    return 0;
}

