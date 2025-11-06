#include <iostream>
using namespace std;

string palabraMasLarga(string frase, int &cantidad);

void hd() {
    string frase;
    cout << "Ingresa una frase: ";
    getline(cin, frase);

    int cantidad = 0;
    string masLarga = palabraMasLarga(frase, cantidad);

    cout << endl;
    cout << "Cantidad de palabras: " << cantidad << endl;
    cout << "Palabra mas larga: " << masLarga << endl;
}

string palabraMasLarga(string frase, int &cantidad) {
    string palabra = "", masLarga = "";

    for (int i = 0; i <= frase.size(); i++) {
        if (frase[i] != ' ' && frase[i] != '\0') {
            palabra += frase[i];
        } else if (palabra != "") {
            cantidad++;
            if (palabra.size() > masLarga.size()) {
                masLarga = palabra;
            }
            palabra = "";
        }
    }

    return masLarga;
}

int main() {
    hd();
    return 0;
}
