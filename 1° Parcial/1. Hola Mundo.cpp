#include <iostream>
using namespace std;

class Saludo {
private:
    string mensaje;

public:
    Saludo(string m) {
        mensaje = m;
    }

    void mostrarMensaje() {
        cout << mensaje << endl;
    }
};


int main() {

    Saludo saludo("Hola mundo");

    saludo.mostrarMensaje();

    return 0;
}

