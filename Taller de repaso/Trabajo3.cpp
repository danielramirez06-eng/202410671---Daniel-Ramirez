#include <iostream>
using namespace std;


void mostrarTabla(int numero)
{
    for (int i = 1; i <= 10; i++) 
    {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }
}

int main(){
    int numero;

    cout << "Escribe un numero para mostrar su tabla de multiplicar: ";
    cin >> numero;

  
    mostrarTabla(numero);

    return 0;
}
