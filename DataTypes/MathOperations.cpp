#include <iostream>
using namespace std;

int main() {
    int option;
    double num1, num2, result;

    cout << "==== Calculadora ====\n";
    cout << "1. Suma\n";
    cout << "2. Resta\n";
    cout << "3. Multiplicacion\n";
    cout << "4. Division\n";
    cout << "Elige una opcion: ";
    cin >> option;

    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    if (option == 1) {
        result = num1 + num2;
        cout << "La suma es: " << result << endl;
    }
    else if (option == 2) {
        result = num1 - num2;
        cout << "La resta es: " << result << endl;
    }
    else if (option == 3) {
        result = num1 * num2;
        cout << "La multiplicacion es: " << result << endl;
    }
    else if (option == 4) {
        if (num2 != 0) {
            result = num1 / num2;
            cout << "La division es: " << result << endl;
        } else {
            cout << "Error: No se puede dividir entre 0." << endl;
        }
    }
    else {
        cout << "Opcion invalida." << endl;
    }

    return 0;
}