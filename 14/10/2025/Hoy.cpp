#include <iostream>
using namespace std;




//5

void checkPalindrome() {
    string word1, word2;

    cout << "Ingrese la primera palabra: ";
    cin >> word1;

    cout << "Ingrese la segunda palabra: ";
    cin >> word2;

    int i = 0;
    bool pal1 = true;
    while (i < word1.size() / 2) {
        if (word1[i] != word1[word1.size() - 1 - i]) {
            pal1 = false;
            break;
        }
        i++;
    }

    i = 0;
    bool pal2 = true;
    while (i < word2.size() / 2) {
        if (word2[i] != word2[word2.size() - 1 - i]) {
            pal2 = false;
            break;
        }
        i++;
    }

    cout << endl;
    cout << "Primera palabra: " << (pal1 ? "Es palindromo" : "No es palindromo") << endl;
    cout << "Segunda palabra: " << (pal2 ? "Es palindromo" : "No es palindromo") << endl;
}


//3
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

//1
void keepOnlyConsonants() {
    string originalString, newString = "";

    cout << "Escribe una palabra: ";
    cin >> originalString;

    for (size_t i = 0; i < originalString.size(); i++) {
        char letter = originalString[i];

        char lower = (letter);

        if (lower != 'a' && lower != 'e' && lower != 'i' && lower != 'o' && lower != 'u') {
            newString += letter;
        }
    }

    cout << "Nuevo: " << newString << endl;
}

//2
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
    checkPalindrome();
    return 0;
}
