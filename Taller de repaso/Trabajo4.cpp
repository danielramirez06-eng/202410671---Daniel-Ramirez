#include <iostream>
using namespace std;

void contarDescendente(int number)
{
    while (number >= 0) 
    {
        cout << number << " ";
        number--;  
    }
    cout << endl;
}


void contarAscendente(int number) 
{
    int i = 0;
    while (i <= number) 
    {
        cout << i << " ";
        i++;  
    }
    cout << endl;
}

int main(){
    int numero;

    cout << "Escribe un numero: ";
    cin >> numero;

    cout << "Conteo descendente:" << endl;
    contarDescendente(numero);

    cout << "Conteo ascendente:" << endl;
    contarAscendente(numero);

    return 0;
}
