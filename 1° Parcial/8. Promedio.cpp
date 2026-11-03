#include <iostream>
using namespace std;

class Estadisticas {
public:
    float numeros[5];
    float suma = 0;

    void ingresarNumeros() {
        for (int i = 0; i < 5; i++) {
            cout << "Ingresa el numero " << i + 1 << ": ";
            cin >> numeros[i];
            suma += numeros[i];
        }
    }

    float calcularSuma() {
        return suma;
    }

    float calcularPromedio() {
        return suma / 5;
    }

    float calcularMedia() {
        return calcularPromedio();
    }

    float calcularMaximo() {
        float maximo = numeros[0];

        for (int i = 1; i < 5; i++) {
            if (numeros[i] > maximo) {
                maximo = numeros[i];
            }
        }

        return maximo;
    }

    float calcularMinimo() {
        float minimo = numeros[0];

        for (int i = 1; i < 5; i++) {
            if (numeros[i] < minimo) {
                minimo = numeros[i];
            }
        }

        return minimo;
    }
};

int main() {
    Estadisticas objeto;

    objeto.ingresarNumeros();

    cout << "\nRESULTADOS" << endl;
    cout << "Suma: " << objeto.calcularSuma() << endl;
    cout << "Promedio: " << objeto.calcularPromedio() << endl;
    cout << "Media: " << objeto.calcularMedia() << endl;
    cout << "Maximo: " << objeto.calcularMaximo() << endl;
    cout << "Minimo: " << objeto.calcularMinimo() << endl;

    return 0;
}


