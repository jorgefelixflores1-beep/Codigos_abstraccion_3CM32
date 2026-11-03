#include <iostream>
using namespace std;

class Persona {
public:
    int edad;
    char inicial;
};

class Ordenamiento {
public:
    void mezclarEnteros(int a[], int inicio, int medio, int fin) {
        int aux[5];
        int i = inicio, j = medio + 1, k = 0;

        while (i <= medio && j <= fin) {
            if (a[i] <= a[j])
                aux[k++] = a[i++];
            else
                aux[k++] = a[j++];
        }

        while (i <= medio) aux[k++] = a[i++];
        while (j <= fin) aux[k++] = a[j++];

        for (i = inicio, k = 0; i <= fin; i++, k++)
            a[i] = aux[k];
    }

    void ordenarEnteros(int a[], int inicio, int fin) {
        if (inicio < fin) {
            int medio = (inicio + fin) / 2;
            ordenarEnteros(a, inicio, medio);
            ordenarEnteros(a, medio + 1, fin);
            mezclarEnteros(a, inicio, medio, fin);
        }
    }

    void mezclarCaracteres(char a[], int inicio, int medio, int fin) {
        char aux[5];
        int i = inicio, j = medio + 1, k = 0;

        while (i <= medio && j <= fin) {
            if (a[i] <= a[j])
                aux[k++] = a[i++];
            else
                aux[k++] = a[j++];
        }

        while (i <= medio) aux[k++] = a[i++];
        while (j <= fin) aux[k++] = a[j++];

        for (i = inicio, k = 0; i <= fin; i++, k++)
            a[i] = aux[k];
    }

    void ordenarCaracteres(char a[], int inicio, int fin) {
        if (inicio < fin) {
            int medio = (inicio + fin) / 2;
            ordenarCaracteres(a, inicio, medio);
            ordenarCaracteres(a, medio + 1, fin);
            mezclarCaracteres(a, inicio, medio, fin);
        }
    }

    void mezclarPersonas(Persona a[], int inicio, int medio, int fin) {
        Persona aux[5];
        int i = inicio, j = medio + 1, k = 0;

        while (i <= medio && j <= fin) {
            if (a[i].edad <= a[j].edad)
                aux[k++] = a[i++];
            else
                aux[k++] = a[j++];
        }

        while (i <= medio) aux[k++] = a[i++];
        while (j <= fin) aux[k++] = a[j++];

        for (i = inicio, k = 0; i <= fin; i++, k++)
            a[i] = aux[k];
    }

    void ordenarPersonas(Persona a[], int inicio, int fin) {
        if (inicio < fin) {
            int medio = (inicio + fin) / 2;
            ordenarPersonas(a, inicio, medio);
            ordenarPersonas(a, medio + 1, fin);
            mezclarPersonas(a, inicio, medio, fin);
        }
    }
};

int main() {
    Ordenamiento obj;
    int numeros[5];
    char letras[5];
    Persona personas[5];

    cout << "ORDENAMIENTO DE ENTEROS" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }
    obj.ordenarEnteros(numeros, 0, 4);

    for (int i = 0; i < 5; i++)
        cout << numeros[i] << " ";
    cout << endl;

    cout << "\nORDENAMIENTO DE CARACTERES" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Caracter " << i + 1 << ": ";
        cin >> letras[i];
    }
    obj.ordenarCaracteres(letras, 0, 4);

    for (int i = 0; i < 5; i++)
        cout << letras[i] << " ";
    cout << endl;

    cout << "\nORDENAMIENTO DE PERSONAS POR EDAD" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Edad: ";
        cin >> personas[i].edad;
        cout << "Inicial: ";
        cin >> personas[i].inicial;
    }
    obj.ordenarPersonas(personas, 0, 4);

    for (int i = 0; i < 5; i++)
        cout << personas[i].edad << " "
             << personas[i].inicial << endl;

    return 0;
}
