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

class CalculadoraHija : public Calculadora {
public:
    float potencia(int base, int exponente) {
        float resultado = 1;

        for (int i = 0; i < exponente; i++) {
            resultado = resultado * base;
        }

        return resultado;
    }
};

int main() {
    CalculadoraHija calc;
    int opcion;
    int base, exponente;
    float n1, n2;

    cout << "CALCULADORA" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "5. Potencia" << endl;

    cout << "Elige una operacion: ";
    cin >> opcion;

    if (opcion == 5) {
        cout << "Ingresa la base: ";
        cin >> base;

        cout << "Ingresa el exponente (entero no negativo): ";
        cin >> exponente;

        if (exponente < 0) {
            cout << "Error: el exponente debe ser no negativo." << endl;
        } else {
            cout << "Resultado: "
                 << calc.potencia(base, exponente) << endl;
        }
    } else if (opcion >= 1 && opcion <= 4) {
        cout << "Ingresa el primer numero: ";
        cin >> n1;

        cout << "Ingresa el segundo numero: ";
        cin >> n2;

        switch (opcion) {
            case 1:
                cout << "Resultado: " << calc.sumar(n1, n2) << endl;
                break;

            case 2:
                cout << "Resultado: " << calc.restar(n1, n2) << endl;
                break;

            case 3:
                cout << "Resultado: " << calc.multiplicar(n1, n2) << endl;
                break;

            case 4:
                if (n2 != 0) {
                    cout << "Resultado: " << calc.dividir(n1, n2) << endl;
                } else {
                    cout << "Error: division entre cero." << endl;
                }
                break;
        }
    } else {
        cout << "Opcion no valida." << endl;
    }

    return 0;
}



