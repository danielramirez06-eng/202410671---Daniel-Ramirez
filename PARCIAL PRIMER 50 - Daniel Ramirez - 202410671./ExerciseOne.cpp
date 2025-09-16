#include <iostream>
using namespace std;

void reviewPackages(int numPackages) 
{
    if (numPackages <= 0) 
    {
        cout << "No hay paquetes para revisar" << endl;
        return; // termina la función aquí
    }

    cout << "Paquetes revisados: ";
    if (numPackages % 2 == 0) 
    { // si es par
        for (int i = 2; i <= numPackages; i += 2) 
        {
            cout << i << " ";
        }
    } 
    else 
    { // si es impar
        for (int i = 1; i <= numPackages; i += 2) 
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main(){
    int numPackages;
    cout << "Introduzca el número de paquetes: ";
    cin >> numPackages;

    reviewPackages(numPackages);

    return 0;
}
