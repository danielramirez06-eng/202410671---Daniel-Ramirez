#include <iostream>

using namespace std;

bool isValidAmount(int amount)
{
     if (amount % 50 == 0) 
    {
        return true;
    } 
    else 
    {
        return false;
    }

}
void dispenseBills(int amount) 
{
    int billetes200 = 0, billetes100 = 0, billetes50 = 0;

    // Mientras se pueda sacar billetes de 200
    while (amount >= 200) 
    {
        amount -= 200;
        billetes200++;
    }

    // Mientras se pueda sacar billetes de 100
    while (amount >= 100) 
    {
        amount -= 100;
        billetes100++;
    }

    // Mientras se pueda sacar billetes de 50
    while (amount >= 50) 
    {
        amount -= 50;
        billetes50++;
    }

    cout << billetes200 << " billetes of 200" << endl;
    cout << billetes100 << " billetes of 100" << endl;
    cout << billetes50 << " billetes of 50" << endl;
}

int main(){
    int amount;

    cout << "Ingrese el monto a retirar: ";
    cin >> amount;

    if (isValidAmount(amount)) 
    {
        dispenseBills(amount);
    } 
    else 
    {
        cout << "Monto no valido, debe ser multiplo de 50" << endl;
    }

    return 0;
}