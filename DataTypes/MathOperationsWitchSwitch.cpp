#include <iostream>
using namespace std;

int main() {
    int option;
    double num1, num2;

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

    switch (option) {
        case 1:
            cout << "El resultado de la suma es: " << num1 + num2 << endl;
            break;

        case 2:
            cout << "El resultado de la resta es: " << num1 - num2 << endl;
            break;

        case 3:
            cout << "El resultado de la multiplicacion es: " << num1 * num2 << endl;
            break;

        case 4:
            if (num2 != 0) {
                cout << "El resultado de la division es: " << num1 / num2 << endl;
            } else {
                cout << "Error: no se puede dividir entre cero." << endl;
            }
            break;

        default:
            cout << "Opcion invalida." << endl;
            break;
    }

    return 0;
}