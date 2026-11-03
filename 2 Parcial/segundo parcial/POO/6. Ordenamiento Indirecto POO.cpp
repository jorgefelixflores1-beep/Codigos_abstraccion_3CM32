#include <iostream>
using namespace std;

class Persona {
public:
    int edad;
    char inicial;
};

class Ordenamiento {
public:
    void quickEnteros(int a[], int ind[], int ini, int fin) {
        int i = ini, j = fin;
        int pivote = a[ind[(ini + fin) / 2]];

        while (i <= j) {
            while (a[ind[i]] < pivote) i++;
            while (a[ind[j]] > pivote) j--;

            if (i <= j) {
                int aux = ind[i];
                ind[i] = ind[j];
                ind[j] = aux;
                i++;
                j--;
            }
        }

        if (ini < j) quickEnteros(a, ind, ini, j);
        if (i < fin) quickEnteros(a, ind, i, fin);
    }

    void quickCaracteres(char a[], int ind[], int ini, int fin) {
        int i = ini, j = fin;
        char pivote = a[ind[(ini + fin) / 2]];

        while (i <= j) {
            while (a[ind[i]] < pivote) i++;
            while (a[ind[j]] > pivote) j--;

            if (i <= j) {
                int aux = ind[i];
                ind[i] = ind[j];
                ind[j] = aux;
                i++;
                j--;
            }
        }

        if (ini < j) quickCaracteres(a, ind, ini, j);
        if (i < fin) quickCaracteres(a, ind, i, fin);
    }

    void quickPersonas(Persona a[], int ind[], int ini, int fin) {
        int i = ini, j = fin;
        int pivote = a[ind[(ini + fin) / 2]].edad;

        while (i <= j) {
            while (a[ind[i]].edad < pivote) i++;
            while (a[ind[j]].edad > pivote) j--;

            if (i <= j) {
                int aux = ind[i];
                ind[i] = ind[j];
                ind[j] = aux;
                i++;
                j--;
            }
        }

        if (ini < j) quickPersonas(a, ind, ini, j);
        if (i < fin) quickPersonas(a, ind, i, fin);
    }
};

int main() {
    Ordenamiento obj;
    int numeros[5], indice[5];
    char letras[5];
    Persona personas[5];

    cout << "NUMEROS ENTEROS\n";
    for (int i = 0; i < 5; i++) {
        cout << "Numero: ";
        cin >> numeros[i];
        indice[i] = i;
    }

    obj.quickEnteros(numeros, indice, 0, 4);
    for (int i = 0; i < 5; i++)
        cout << numeros[indice[i]] << " ";

    cout << "\n\nCARACTERES\n";
    for (int i = 0; i < 5; i++) {
        cout << "Caracter: ";
        cin >> letras[i];
        indice[i] = i;
    }

    obj.quickCaracteres(letras, indice, 0, 4);
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

    obj.quickPersonas(personas, indice, 0, 4);
    for (int i = 0; i < 5; i++)
        cout << personas[indice[i]].edad << " "
             << personas[indice[i]].inicial << endl;

    return 0;
}
