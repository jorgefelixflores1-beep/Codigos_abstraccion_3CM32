#include <iostream>
using namespace std;

struct Persona {
    int edad;
    char inicial;
};

void ordenarEnteros(int numeros[], int n) {
    int aux;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;
            }
        }
    }
}

void ordenarCaracteres(char letras[], int n) {
    char aux;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (letras[j] > letras[j + 1]) {
                aux = letras[j];
                letras[j] = letras[j + 1];
                letras[j + 1] = aux;
            }
        }
    }
}

void ordenarPersonas(Persona personas[], int n) {
    Persona aux;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (personas[j].edad > personas[j + 1].edad) {
                aux = personas[j];
                personas[j] = personas[j + 1];
                personas[j + 1] = aux;
            }
        }
    }
}

int main() {
    int numeros[5];
    char letras[5];
    Persona personas[5];

    cout << "ORDENAMIENTO DE NUMEROS ENTEROS" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Ingresa el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    ordenarEnteros(numeros, 5);

    cout << "Numeros ordenados: ";
    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }

    cout << "\n\nORDENAMIENTO DE CARACTERES" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Ingresa el caracter " << i + 1 << ": ";
        cin >> letras[i];
    }

    ordenarCaracteres(letras, 5);

    cout << "Caracteres ordenados: ";
    for (int i = 0; i < 5; i++) {
        cout << letras[i] << " ";
    }

    cout << "\n\nORDENAMIENTO DE PERSONAS POR EDAD" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Ingresa la edad de la persona " << i + 1 << ": ";
        cin >> personas[i].edad;

        cout << "Ingresa su inicial: ";
        cin >> personas[i].inicial;
    }

    ordenarPersonas(personas, 5);

    cout << "\nPersonas ordenadas por edad:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Edad: " << personas[i].edad
             << ", Inicial: " << personas[i].inicial << endl;
    }

    return 0;
}


