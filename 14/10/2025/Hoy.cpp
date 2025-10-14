#include <iostream>
using namespace std;


void letterInCommon(){
    string word1, word2;

    cout << "Ingrese la primera palabra:  ";
    cin >> word1;

    cout << "Ingrese su segunda palabra:  ";
    cin >> word2;


    int contador = 0;
    for (char c1: word1)
    {
        for (char c2 : word2)
        {
            if ((c1) == (c2))
            {
                contador ++;
                break;
            }
    
        }
    }
    cout << "Letras en comun: " << contador << endl;
}

void keepOnlyConsonants() {
    string originalString, newString = "";

    cout << "Escribe una palabra: ";
    cin >> originalString;

    for (size_t i = 0; i < originalString.size(); i++) {
        char letter = originalString[i];

        char lower = tolower(letter);

        if (lower != 'a' && lower != 'e' && lower != 'i' && lower != 'o' && lower != 'u') {
            newString += letter;
        }
    }

    cout << "Nuevo: " << newString << endl;
}


void alternateCaseWithASCII() {
    string originalString, newString = "";

    cout << "Ingresa una palabra sin espacios: ";
    cin >> originalString;

    for (size_t i = 0; i < originalString.size(); i++) 
    {
        char letter = originalString[i];

        if (i % 2 == 0 && letter >= 'a' && letter <= 'z') 
        {
            letter = letter - 32;
        }
        else if (i % 2 != 0 && letter >= 'A' && letter <= 'Z') 
        {
            letter = letter + 32;
        }

        newString += letter;
    }

    cout << "Resultado: " << newString << endl;
}

int main() {
    letterInCommon();
    return 0;
}
