#include <iostream>
using namespace std;

class Calculadora {
public:
    int sumar(int n1, int n2) {
        return n1 + n2;
    }
};

int main() {
    Calculadora objeto;
    int num1, num2;

    cout << "Ingresa el primer numero: ";
    cin >> num1;

    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    cout << "El resultado de la suma es: "
         << objeto.sumar(num1, num2) << endl;

    return 0;
}


