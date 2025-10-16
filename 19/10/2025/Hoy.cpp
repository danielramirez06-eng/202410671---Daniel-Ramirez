#include <iostream>
#include <string>
using namespace std;



//CONTRASEÑAAAAA


bool tieneMayuscula(string contrasena) {
    for (int i = 0; i < contrasena.length(); i++) {
        char c = contrasena[i];
        if (c >= 65 && c <= 90) // A-Z
            return true;
    }
    return false;
}

bool tieneMinuscula(string contrasena) {
    for (int i = 0; i < contrasena.length(); i++) {
        char c = contrasena[i];
        if (c >= 97 && c <= 122) // a-z
            return true;
    }
    return false;
}

bool tieneCaracteresEspeciales(string contrasena) {
    int contador = 0;
    for (int i = 0; i < contrasena.length(); i++) {
        char c = contrasena[i];
        if ((c >= 33 && c <= 47) || 
            (c >= 58 && c <= 64) || 
            (c >= 91 && c <= 96) || 
            (c >= 123 && c <= 126)) {
            contador++;
        }
    }
    return (contador >= 3);
}

bool tieneLongitudValida(string contrasena) {
    return (contrasena.length() >= 8);
}


bool validarContrasena(string contrasena) {
    bool mayus = tieneMayuscula(contrasena);
    bool minus = tieneMinuscula(contrasena);
    bool especiales = tieneCaracteresEspeciales(contrasena);
    bool longitud = tieneLongitudValida(contrasena);

    return (mayus && minus && especiales && longitud);
}

void contraseñas() {
    string contrasena;

    cout << "Ingrese su contraseña: ";
    getline(cin, contrasena);

    if (validarContrasena(contrasena))
        cout << " Contraseña válida" << endl;
    else
        cout << "Contraseña inválida" << endl;
}


int main() {
    
    contraseñas();

    return 0;
}
