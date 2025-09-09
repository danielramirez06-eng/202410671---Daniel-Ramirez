#include <iostream>
using namespace std;

int main() {
    int numeroSecreto, intento;


    numeroSecreto = 10;


    cout << "intenta adivinar el número!" << endl;
    cout << "Ingresa tu número: ";
    cin >> intento;

    while (intento != numeroSecreto) 
    {

        if (intento > numeroSecreto) 
        {
            cout << "El número secreto es más pequeño." << endl;
        } else 
        {
            cout << "El número secreto es más grande." << endl;
        }

        cout << "Ingresa tu número: ";
        cin >> intento;
    }

    cout << "Felicidades has adivinado el número." << endl;

    return 0;
}
