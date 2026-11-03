#include <iostream>
using namespace std;

struct Persona {
    int edad;
    char inicial;
};

void ordenarEnteros(int a[], int indice[], int n) {
    for (int i = 0; i < n; i++)
        indice[i] = i;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[indice[j]] > a[indice[j + 1]]) {
                int aux = indice[j];
                indice[j] = indice[j + 1];
                indice[j + 1] = aux;
            }
        }
    }
}

void ordenarCaracteres(char a[], int indice[], int n) {
    for (int i = 0; i < n; i++)
        indice[i] = i;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[indice[j]] > a[indice[j + 1]]) {
                int aux = indice[j];
                indice[j] = indice[j + 1];
                indice[j + 1] = aux;
            }
        }
    }
}

void ordenarPersonas(Persona a[], int indice[], int n) {
    for (int i = 0; i < n; i++)
        indice[i] = i;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[indice[j]].edad > a[indice[j + 1]].edad) {
                int aux = indice[j];
                indice[j] = indice[j + 1];
                indice[j + 1] = aux;
            }
        }
    }
}

int main() {
    int numeros[5], indice[5];
    char letras[5];
    Persona personas[5];

    cout << "NUMEROS ENTEROS\n";
    for (int i = 0; i < 5; i++) {
        cout << "Numero: ";
        cin >> numeros[i];
    }
    ordenarEnteros(numeros, indice, 5);
    for (int i = 0; i < 5; i++)
        cout << numeros[indice[i]] << " ";

    cout << "\n\nCARACTERES\n";
    for (int i = 0; i < 5; i++) {
        cout << "Caracter: ";
        cin >> letras[i];
    }
    ordenarCaracteres(letras, indice, 5);
    for (int i = 0; i < 5; i++)
        cout << letras[indice[i]] << " ";

    cout << "\n\nPERSONAS POR EDAD\n";
    for (int i = 0; i < 5; i++) {
        cout << "Edad: ";
        cin >> personas[i].edad;
        cout << "Inicial: ";
        cin >> personas[i].inicial;
    }
    ordenarPersonas(personas, indice, 5);
    for (int i = 0; i < 5; i++)
        cout << personas[indice[i]].edad << " "
             << personas[indice[i]].inicial << endl;

    return 0;
}
