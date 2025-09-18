#include <iostream>
using namespace std;


int mayor(int firstNumber, int secondNumber) 
{
    if (firstNumber > secondNumber) 
    {
        return firstNumber;
    } 
    else
    {
        return secondNumber;
    }
}

int main(){
    int num1, num2;

    cout << "Escribe el primer numero: ";
    cin >> num1;

    cout << "Escribe el segundo numero: ";
    cin >> num2;

    
    int resultado = mayor(num1, num2);

    cout << "El mayor es: " << resultado << endl;

    return 0;
}
