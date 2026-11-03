#include <iostream>
using namespace std;

struct Persona {
    int edad;
    char inicial;
};

void mezclarEnteros(int a[], int ind[], int ini, int medio, int fin) {
    int aux[5], i = ini, j = medio + 1, k = 0;

    while (i <= medio && j <= fin) {
        if (a[ind[i]] <= a[ind[j]]) aux[k++] = ind[i++];
        else aux[k++] = ind[j++];
    }

    while (i <= medio) aux[k++] = ind[i++];
    while (j <= fin) aux[k++] = ind[j++];

    for (i = ini, k = 0; i <= fin; i++, k++)
        ind[i] = aux[k];
}

void mergeEnteros(int a[], int ind[], int ini, int fin) {
    if (ini < fin) {
        int medio = (ini + fin) / 2;
        mergeEnteros(a, ind, ini, medio);
        mergeEnteros(a, ind, medio + 1, fin);
        mezclarEnteros(a, ind, ini, medio, fin);
    }
}

void mezclarCaracteres(char a[], int ind[], int ini, int medio, int fin) {
    int aux[5], i = ini, j = medio + 1, k = 0;

    while (i <= medio && j <= fin) {
        if (a[ind[i]] <= a[ind[j]]) aux[k++] = ind[i++];
        else aux[k++] = ind[j++];
    }

    while (i <= medio) aux[k++] = ind[i++];
    while (j <= fin) aux[k++] = ind[j++];

    for (i = ini, k = 0; i <= fin; i++, k++)
        ind[i] = aux[k];
}

void mergeCaracteres(char a[], int ind[], int ini, int fin) {
    if (ini < fin) {
        int medio = (ini + fin) / 2;
        mergeCaracteres(a, ind, ini, medio);
        mergeCaracteres(a, ind, medio + 1, fin);
        mezclarCaracteres(a, ind, ini, medio, fin);
    }
}

void mezclarPersonas(Persona a[], int ind[], int ini, int medio, int fin) {
    int aux[5], i = ini, j = medio + 1, k = 0;

    while (i <= medio && j <= fin) {
        if (a[ind[i]].edad <= a[ind[j]].edad) aux[k++] = ind[i++];
        else aux[k++] = ind[j++];
    }

    while (i <= medio) aux[k++] = ind[i++];
    while (j <= fin) aux[k++] = ind[j++];

    for (i = ini, k = 0; i <= fin; i++, k++)
        ind[i] = aux[k];
}

void mergePersonas(Persona a[], int ind[], int ini, int fin) {
    if (ini < fin) {
        int medio = (ini + fin) / 2;
        mergePersonas(a, ind, ini, medio);
        mergePersonas(a, ind, medio + 1, fin);
        mezclarPersonas(a, ind, ini, medio, fin);
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
        indice[i] = i;
    }

    mergeEnteros(numeros, indice, 0, 4);
    for (int i = 0; i < 5; i++)
        cout << numeros[indice[i]] << " ";

    cout << "\n\nCARACTERES\n";
    for (int i = 0; i < 5; i++) {
        cout << "Caracter: ";
        cin >> letras[i];
        indice[i] = i;
    }

    mergeCaracteres(letras, indice, 0, 4);
    for (int i = 0; i < 5; i++)
        cout << letras[indice[i]] << " ";

    cout << "\n\nPERSONAS POR EDAD\n";
    for (int i = 0; i < 5; i++) {
        cout << "Edad: ";
        cin >> personas[i].edad;
        cout << "Inicial: ";
        cin >> personas[i].inicial;
        indice[i] = i;
    }

    mergePersonas(personas, indice, 0, 4);
    for (int i = 0; i < 5; i++)
        cout << personas[indice[i]].edad << " "
             << personas[indice[i]].inicial << endl;

    return 0;
}
