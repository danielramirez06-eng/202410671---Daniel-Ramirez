#include <iostream>
#include <string>
using namespace std;


//SEÑALEEEES
void validadorSeñal(){

    string señal, palabra;
    int guiones = 0, puntos = 0;

    cout << "Ingrese la senal de radio (solo '-' y '.'): ";
    cin >> señal;

    for(int i = 0; i < señal.size(); i++){
        if(señal[i] == '-'){
            guiones++;
        }
        else if(señal[i] == '.'){
            puntos++;
        }
    }

    float promedio = 0;
    if(puntos != 0){
        promedio = (float)guiones / puntos;
    }

    cout << "\nSeñales positivas (-): " << guiones << endl;
    cout << "Señales negativas (.): " << puntos << endl;
    cout << "Promedio (+ / -): " << promedio << endl;

    cout << "\nIngrese una palabra sin espacios: ";
    cin >> palabra;

    string nueva = palabra;

    for(int i = 0; i < palabra.size(); i++){
        char c = palabra[i];

        if(c >= 97 && c <= 122){ 
            if(i % 2 == 0){
                nueva[i] = c - 32;  
            }else{
                nueva[i] = c;
            }
        }
        else if(c >= 65 && c <= 90){ 
            if(i % 2 != 0){
                nueva[i] = c + 32;  
            }else{
                nueva[i] = c;
            }
        }
    }

    cout << "\nPalabra modificada: " << nueva << endl;
}




//CONTRASEÑAAAAA


bool tieneMayuscula(string contraseña) {
    for (int i = 0; i < contraseña.size(); i++) {
        char c = contraseña[i];
        if (c >= 65 && c <= 90) // A-Z
            return true;
    }
    return false;
}

bool tieneMinuscula(string contraseña) {
    for (int i = 0; i < contraseña.size(); i++) {
        char c = contraseña[i];
        if (c >= 97 && c <= 122) // a-z
            return true;
    }
    return false;
}

bool tieneCaracteresEspeciales(string contraseña) {
    int contador = 0;
    for (int i = 0; i < contraseña.size(); i++) {
        char c = contraseña[i];
        if ((c >= 33 && c <= 47) || 
            (c >= 58 && c <= 64) || 
            (c >= 91 && c <= 96) || 
            (c >= 123 && c <= 126)) {
            contador++;
        }
    }
    return (contador >= 3);
}

bool tieneLongitudValida(string contraseña) {
    return (contraseña.length() >= 8);
}


bool validarContraseña(string contraseña) {
    bool mayus = tieneMayuscula(contraseña);
    bool minus = tieneMinuscula(contraseña);
    bool especiales = tieneCaracteresEspeciales(contraseña);
    bool longitud = tieneLongitudValida(contraseña);

    return (mayus && minus && especiales && longitud);
}

void contraseñas() {
    string contraseña;

    cout << "Ingrese su contraseña: ";
    getline(cin, contraseña);

    if (validarContraseña(contraseña))
        cout << " Contraseña válida" << endl;
    else
        cout << "Contraseña inválida" << endl;
}


int main() {
    
    contraseñas();
    //validadorSeñal();

    return 0;
}
