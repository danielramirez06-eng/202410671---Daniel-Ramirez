#include <iostream>
using namespace std;

// Function with two parameters
void showShifts(int start, int end) 
{
    if (start > end) 
    {
        cout << "Error: el turno inicial no puede ser mayor que el turno final." << endl;
        return; // exit the function
    }

    cout << "La máquina funcionaba por turnos: ";
    int shift = start;

    
    while (shift <= end) 
    {
        cout << shift << " ";
        shift++;
    }

    cout << endl;
}

int main(){
    int start, end;
    cout << "Introduzca el turno inicial: ";
    cin >> start;
    cout << "Entra el turno final: ";
    cin >> end;

    showShifts(start, end);

    return 0;
}
