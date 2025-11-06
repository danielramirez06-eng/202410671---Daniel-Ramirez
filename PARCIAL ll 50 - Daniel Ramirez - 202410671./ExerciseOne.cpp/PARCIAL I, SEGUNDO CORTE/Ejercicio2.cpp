#include <iostream>
using namespace std;

void temperatura() {
    float tempMin, tempMax;
    cout << "Ingresa tu temperatura minima: ";
    cin >> tempMin;

    cout << "Ingresa tu temperatura maxima: ";
    cin >> tempMax;

    string citys[10] = {"Bogotá", "Medellín", "Cali", "Cartagena", "Pereira",
                        "Bucaramanga", "Manizales", "Tunja", "Santa Marta", "Villavicencio"};

    float temperatures[10] = {18.5, 25.1, 27.8, 31.3, 22.7, 26.2, 19.0, 16.4, 30.5, 29.0};

    int tam = sizeof(temperatures) / sizeof(float);

}

   