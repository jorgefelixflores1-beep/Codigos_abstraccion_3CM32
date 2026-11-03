#include <iostream>
using namespace std;

class Calculadora {
public:
    void calcular() {
        cout << "CALCULADORA" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicacion" << endl;
        cout << "4. Division" << endl;
    }

    float calcular(float n1, float n2) {
        return n1 + n2;
    }

    float calcular(float n1, float n2, int op) {
        switch (op) {
        case 1:
            return n1 + n2;
        case 2:
            return n1 - n2;
        case 3:
            return n1 * n2;
        case 4:
            if (n2 != 0) {
                return n1 / n2;
            } else {
                return 0;
            }
        default:
            return 0;
        }
    }
};

int main() {
    Calculadora objeto;
    int op;
    float n1, n2;

    objeto.calcular();

    cout << "Elige una operacion: ";
    cin >> op;

    cout << "Ingresa el primer numero: ";
    cin >> n1;

    cout << "Ingresa el segundo numero: ";
    cin >> n2;

    if (op == 1) {
        cout << "Resultado: "
             << objeto.calcular(n1, n2) << endl;
    } else if (op >= 2 && op <= 4) {
        if (op == 4 && n2 == 0) {
            cout << "Error: division entre cero." << endl;
        } else {
            cout << "Resultado: "
                 << objeto.calcular(n1, n2, op) << endl;
        }
    } else {
        cout << "Opcion no valida." << endl;
    }

    return 0;
}


