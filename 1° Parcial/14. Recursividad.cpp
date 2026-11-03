#include <iostream>
using namespace std;

class Calculadora {
public:
    float calcular(float n1, float n2) {
        return n1 + n2;
    }

    float restar(float n1, float n2) {
        return n1 - n2;
    }

    float multiplicar(float n1, float n2) {
        if (n2 == 0)
            return 0;

        if (n2 < 0)
            return -multiplicar(n1, -n2);

        return n1 + multiplicar(n1, n2 - 1);
    }

    float potencia(float base, int exponente) {
        if (exponente == 0)
            return 1;

        if (exponente < 0)
            return 1 / potencia(base, -exponente);

        return multiplicar(base, potencia(base, exponente - 1));
    }

    int dividir(int n1, int n2) {
        if (n2 == 0) {
            cout << "Error: division entre cero." << endl;
            return 0;
        }

        if (n1 < 0 && n2 < 0)
            return dividir(-n1, -n2);

        if (n1 < 0)
            return -dividir(-n1, n2);

        if (n2 < 0)
            return -dividir(n1, -n2);

        if (n1 < n2)
            return 0;

        return 1 + dividir(n1 - n2, n2);
    }

    unsigned long long factorial(int n) {
        if (n <= 1)
            return 1;

        return n * factorial(n - 1);
    }

    unsigned long long fibonacci(int n) {
        if (n <= 1)
            return n;

        return fibonacci(n - 1) + fibonacci(n - 2);
    }
};

int main() {
    Calculadora calc;
    int opcion, n1, n2;

    do {
        cout << "\nCALCULADORA RECURSIVA" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicacion recursiva" << endl;
        cout << "4. Potencia recursiva" << endl;
        cout << "5. Division recursiva" << endl;
        cout << "6. Factorial" << endl;
        cout << "7. Fibonacci" << endl;
        cout << "8. Salir" << endl;
        cout << "Selecciona una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            cout << "Ingresa dos numeros: ";
            cin >> n1 >> n2;
            cout << "Resultado: " << calc.calcular(n1, n2) << endl;
            break;

        case 2:
            cout << "Ingresa dos numeros: ";
            cin >> n1 >> n2;
            cout << "Resultado: " << calc.restar(n1, n2) << endl;
            break;

        case 3:
            cout << "Ingresa dos numeros enteros (el segundo no debe ser negativo): ";
            cin >> n1 >> n2;
            if (n2 < 0)
                cout << "El segundo numero debe ser positivo o cero." << endl;
            else
                cout << "Resultado: " << calc.multiplicar(n1, n2) << endl;
            break;

        case 4:
            cout << "Ingresa la base y el exponente entero: ";
            cin >> n1 >> n2;
            if (n1 == 0 && n2 < 0)
                cout << "Error: cero no puede tener exponente negativo." << endl;
            else
                cout << "Resultado: " << calc.potencia(n1, n2) << endl;
            break;

        case 5:
            cout << "Ingresa el dividendo y el divisor: ";
            cin >> n1 >> n2;
            if (n2 != 0)
                cout << "Cociente entero: " << calc.dividir(n1, n2) << endl;
            else
                calc.dividir(n1, n2);
            break;

        case 6:
            cout << "Ingresa un numero entre 0 y 20: ";
            cin >> n1;
            if (n1 >= 0 && n1 <= 20)
                cout << "Factorial: " << calc.factorial(n1) << endl;
            else
                cout << "Numero fuera de rango." << endl;
            break;

        case 7:
            cout << "Ingresa la posicion Fibonacci (0 a 40): ";
            cin >> n1;
            if (n1 >= 0 && n1 <= 40)
                cout << "Fibonacci: " << calc.fibonacci(n1) << endl;
            else
                cout << "Numero fuera de rango." << endl;
            break;

        case 8:
            cout << "Saliendo..." << endl;
            break;

        default:
            cout << "Opcion no valida." << endl;
        }

    } while (opcion != 8);

    return 0;
}

