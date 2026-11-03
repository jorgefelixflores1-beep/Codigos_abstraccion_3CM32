#include <iostream>
#include <graphics.h>
#include <cmath>
using namespace std;

class Fractales {
public:
    void sierpinski(int x1, int y1, int x2, int y2,
                    int x3, int y3, int nivel) {
        if (nivel == 0) {
            line(x1, y1, x2, y2);
            line(x2, y2, x3, y3);
            line(x3, y3, x1, y1);
            return;
        }

        int x12 = (x1 + x2) / 2;
        int y12 = (y1 + y2) / 2;
        int x23 = (x2 + x3) / 2;
        int y23 = (y2 + y3) / 2;
        int x31 = (x3 + x1) / 2;
        int y31 = (y3 + y1) / 2;

        sierpinski(x1, y1, x12, y12, x31, y31, nivel - 1);
        sierpinski(x12, y12, x2, y2, x23, y23, nivel - 1);
        sierpinski(x31, y31, x23, y23, x3, y3, nivel - 1);
    }

    void cantor(int x, int y, int longitud, int nivel) {
        if (nivel == 0 || longitud < 3)
            return;

        line(x, y, x + longitud, y);

        int nuevaLongitud = longitud / 3;
        int nuevaY = y + 30;

        cantor(x, nuevaY, nuevaLongitud, nivel - 1);
        cantor(x + 2 * nuevaLongitud, nuevaY,
               nuevaLongitud, nivel - 1);
    }
};

int main() {
    Fractales objeto;
    int opcion, nivel;

    cout << "FRACTALES RECURSIVOS" << endl;
    cout << "1. Triangulo de Sierpinski" << endl;
    cout << "2. Polvo de Cantor" << endl;
    cout << "Selecciona una opcion: ";
    cin >> opcion;

    cout << "Ingresa el nivel de recursividad (1 a 6): ";
    cin >> nivel;

    if (nivel < 1 || nivel > 6) {
        cout << "Nivel no valido." << endl;
        return 0;
    }

    initwindow(800, 600, "Fractales");

    if (opcion == 1) {
        objeto.sierpinski(400, 50, 100, 500,
                          700, 500, nivel);
    }
    else if (opcion == 2) {
        objeto.cantor(50, 50, 700, nivel);
    }
    else {
        cout << "Opcion no valida." << endl;
        closegraph();
        return 0;
    }

    getch();
    closegraph();

    return 0;
}

