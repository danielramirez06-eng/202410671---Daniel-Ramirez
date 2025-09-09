#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "¿Qué tabla de multiplicar deseas (1 - 10)? ";
    cin >> num;

    cout << "\n--- Tabla del " << num << " con FOR ---\n";
    for (int i = 1; i <= 10; i++) 
    
    {
        int multiplicationResult = i * num;
        cout << num << " x " << i << " = " << multiplicationResult << endl;
    }

  
    return 0;
}
