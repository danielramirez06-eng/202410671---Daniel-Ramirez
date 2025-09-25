#include <iostream>
using namespace std;

//Total a pagar

int calculateTotal(int hours, int rate)
{
    return hours * rate;
}

//Aqui me daria la factura para cada vehiculo

void printInvoice(string plate, int hours, int rate)
{
    int total = calculateTotal(hours, rate);
    cout << "Vehiculo " << plate 
         << ", horas: " << hours 
         << ", tarifa: " << rate 
         << ", total: " << total << endl;
}

int main(){
    string plate;
    int hours, rate;

    //Aqui se le piden los datos al dueño del auto

    cout << "Ingrese la placa del vehiculo: ";
    cin >> plate;
    cout << "Ingrese las horas de parqueo: ";
    cin >> hours;
    cout << "Ingrese la tarifa por hora: ";
    cin >> rate;


    //Aqui llamas a la funcion encargada de darte los datos con la funcion pedida

    
    printInvoice(plate, hours, rate);

    return 0;
}