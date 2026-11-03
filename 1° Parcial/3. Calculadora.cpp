#include <iostream>
using namespace std;

class Calculadora {
public:
    float sumar(float n1, float n2) {
        return n1 + n2;
    }

    float restar(float n1, float n2) {
        return n1 - n2;
    }

    float multiplicar(float n1, float n2) {
        return n1 * n2;
    }

    float dividir(float n1, float n2) {
        return n1 / n2;
    }
};

int main() {
    Calculadora objeto;
    int operacion;
    float n1, n2;

    cout << "MENU DE OPERACIONES" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;

    cout << "Elige una operacion: ";
    cin >> operacion;

    cout << "Ingresa el primer numero: ";
    cin >> n1;

    cout << "Ingresa el segundo numero: ";
    cin >> n2;

    switch (operacion) {
        case 1:
            cout << "El resultado de la suma es: "
                 << objeto.sumar(n1, n2) << endl;
            break;

        case 2:
            cout << "El resultado de la resta es: "
                 << objeto.restar(n1, n2) << endl;
            break;

        case 3:
            cout << "El resultado de la multiplicacion es: "
                 << objeto.multiplicar(n1, n2) << endl;
            break;

        case 4:
            if (n2 != 0) {
                cout << "El resultado de la division es: "
                     << objeto.dividir(n1, n2) << endl;
            } else {
                cout << "Error: No se puede dividir entre cero."
                     << endl;
            }
            break;

        default:
            cout << "Opcion no valida." << endl;
            break;
    }

    return 0;
}


