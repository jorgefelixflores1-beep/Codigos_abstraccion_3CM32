#include <iostream>
using namespace std;

class Persona {
public:
    int edad;
    char inicial;
};

class Ordenamiento {
public:
    void quickEnteros(int a[], int inicio, int fin) {
        int i = inicio, j = fin;
        int pivote = a[(inicio + fin) / 2];

        while (i <= j) {
            while (a[i] < pivote) i++;
            while (a[j] > pivote) j--;

            if (i <= j) {
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
                i++;
                j--;
            }
        }

        if (inicio < j) quickEnteros(a, inicio, j);
        if (i < fin) quickEnteros(a, i, fin);
    }

    void quickCaracteres(char a[], int inicio, int fin) {
        int i = inicio, j = fin;
        char pivote = a[(inicio + fin) / 2];

        while (i <= j) {
            while (a[i] < pivote) i++;
            while (a[j] > pivote) j--;

            if (i <= j) {
                char aux = a[i];
                a[i] = a[j];
                a[j] = aux;
                i++;
                j--;
            }
        }

        if (inicio < j) quickCaracteres(a, inicio, j);
        if (i < fin) quickCaracteres(a, i, fin);
    }

    void quickPersonas(Persona a[], int inicio, int fin) {
        int i = inicio, j = fin;
        int pivote = a[(inicio + fin) / 2].edad;

        while (i <= j) {
            while (a[i].edad < pivote) i++;
            while (a[j].edad > pivote) j--;

            if (i <= j) {
                Persona aux = a[i];
                a[i] = a[j];
                a[j] = aux;
                i++;
                j--;
            }
        }

        if (inicio < j) quickPersonas(a, inicio, j);
        if (i < fin) quickPersonas(a, i, fin);
    }
};

int main() {
    Ordenamiento obj;
    int numeros[5];
    char letras[5];
    Persona personas[5];

    cout << "ORDENAMIENTO DE ENTEROS\n";
    for (int i = 0; i < 5; i++) {
        cout << "Numero: ";
        cin >> numeros[i];
    }

    obj.quickEnteros(numeros, 0, 4);

    for (int i = 0; i < 5; i++)
        cout << numeros[i] << " ";
    cout << endl;

    cout << "\nORDENAMIENTO DE CARACTERES\n";
    for (int i = 0; i < 5; i++) {
        cout << "Caracter: ";
        cin >> letras[i];
    }

    obj.quickCaracteres(letras, 0, 4);

    for (int i = 0; i < 5; i++)
        cout << letras[i] << " ";
    cout << endl;

    cout << "\nORDENAMIENTO DE PERSONAS POR EDAD\n";
    for (int i = 0; i < 5; i++) {
        cout << "Edad: ";
        cin >> personas[i].edad;
        cout << "Inicial: ";
        cin >> personas[i].inicial;
    }

    obj.quickPersonas(personas, 0, 4);

    for (int i = 0; i < 5; i++)
        cout << personas[i].edad << " "
             << personas[i].inicial << endl;

    return 0;
}
