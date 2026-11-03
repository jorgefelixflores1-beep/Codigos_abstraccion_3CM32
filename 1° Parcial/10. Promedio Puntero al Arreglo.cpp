#include <iostream>
using namespace std;

class Estadisticas {
public:
    float numeros[5];
    float *puntero = numeros;

    void ingresarNumeros() {
        for (int i = 0; i < 5; i++) {
            cout << "Ingresa el numero " << i + 1 << ": ";
            cin >> *(puntero + i);
        }
    }

    float calcularSuma() {
        float suma = 0;

        for (int i = 0; i < 5; i++) {
            suma += *(puntero + i);
        }

        return suma;
    }

    float calcularPromedio() {
        return calcularSuma() / 5;
    }

    float calcularMedia() {
        return calcularPromedio();
    }

    float calcularMaximo() {
        float maximo = *puntero;

        for (int i = 1; i < 5; i++) {
            if (*(puntero + i) > maximo) {
                maximo = *(puntero + i);
            }
        }

        return maximo;
    }

    float calcularMinimo() {
        float minimo = *puntero;

        for (int i = 1; i < 5; i++) {
            if (*(puntero + i) < minimo) {
                minimo = *(puntero + i);
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


