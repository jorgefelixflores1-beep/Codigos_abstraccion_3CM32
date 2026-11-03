#include <iostream>
using namespace std;

class Calculadora {
public:
    virtual float calcular(float n1, float n2) {
        return n1 + n2;
    }

    float restar(float n1, float n2) {
        return n1 - n2;
    }
};

class CalculadoraNueva : public Calculadora {
public:
    float calcular(float n1, float n2) override {
        float resultado = 0;
        int veces = n2;

        for (int i = 0; i < veces; i++) {
            resultado = resultado + n1;
        }

        return resultado;
    }

    float potencia(int base, int exponente) {
        float resultado = 1;

        for (int i = 0; i < exponente; i++) {
            resultado = calcular(resultado, base);
        }

        return resultado;
    }

    int dividir(int n1, int n2) {
        if (n2 == 0) {
            cout << "Error: division entre cero." << endl;
            return 0;
        }

        int cociente = 0;
        int signo = 1;

        if (n1 < 0) {
            n1 = -n1;
            signo = -signo;
        }

        if (n2 < 0) {
            n2 = -n2;
            signo = -signo;
        }

        while (n1 >= n2) {
            n1 = n1 - n2;
            cociente++;
        }

        return cociente * signo;
    }
};

int main() {
    CalculadoraNueva calc;
    int opcion;
    int n1, n2;

    cout << "CALCULADORA" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion por sumas sucesivas" << endl;
    cout << "4. Potencia por multiplicaciones sucesivas" << endl;
    cout << "5. Division por restas sucesivas" << endl;

    cout << "Elige una operacion: ";
    cin >> opcion;

    cout << "Ingresa el primer numero: ";
    cin >> n1;

    cout << "Ingresa el segundo numero: ";
    cin >> n2;

    switch (opcion) {
        case 1:
            cout << "Resultado: "
                 << calc.Calculadora::calcular(n1, n2) << endl;
            break;

        case 2:
            cout << "Resultado: "
                 << calc.restar(n1, n2) << endl;
            break;

        case 3:
            if (n2 < 0) {
                cout << "Usa un multiplicador entero no negativo." << endl;
            } else {
                cout << "Resultado: "
                     << calc.calcular(n1, n2) << endl;
            }
            break;

        case 4:
            if (n2 < 0) {
                cout << "Usa un exponente entero no negativo." << endl;
            } else {
                cout << "Resultado: "
                     << calc.potencia(n1, n2) << endl;
            }
            break;

        case 5:
            cout << "Cociente entero: "
                 << calc.dividir(n1, n2) << endl;
            break;

        default:
            cout << "Opcion no valida." << endl;
    }

    return 0;
}


