#include <iostream>
using namespace std;

// Función que retorna bool
bool requiresMaintenance(int leaves, int interval) 
{
    if (leaves % interval == 0) 
    {
        return true;  // divisible - requiere mantenimiento
    } 
    else 
    {
        return false; // no divisible - no requiere mantenimiento
    }
}

int main(){
    int leaves, interval;

    cout << "Ingrese la cantidad de hojas producidas: ";
    cin >> leaves;

    cout << "Ingrese el intervalo de mantenimiento: ";
    cin >> interval;

    // Usamos la función y mostramos el resultado
    if (requiresMaintenance(leaves, interval)) 
    {
        cout << "La máquina requiere mantenimiento." << endl;
    } 
    else 
    {
        cout << "La máquina no requiere mantenimiento." << endl;
    }

    return 0;
}
