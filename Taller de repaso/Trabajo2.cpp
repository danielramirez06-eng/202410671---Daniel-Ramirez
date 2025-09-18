#include <iostream>
using namespace std;

void clasificarNumero(int numero)
{
    if (numero > 0)
    {
        cout << "Positivo" << endl;
    } 
    else if (numero < 0) 
    {
        cout << "Negativo" << endl;
    } 
    else 
    {
        cout << "Cero" << endl;
    }
}

int main(){
    int numero;

    cout << "Escribe un numero entero: ";
    cin >> numero;

    clasificarNumero(numero);

    return 0;
}
