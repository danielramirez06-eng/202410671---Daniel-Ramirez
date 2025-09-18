#include <iostream>
using namespace std;

int main(){
    char nombre[20];   
    int edad;
    float estatura;

    cout << "Escribe tu nombre: ";
    cin >> nombre; 

    cout << "Escribe tu edad: ";
    cin >> edad;

    cout << "Escribe tu estatura en metros: ";
    cin >> estatura;

    cout << "Hola " << nombre << ", tienes " << edad 
         << " años y mides " << estatura << " metros." << endl;

    return 0;
}