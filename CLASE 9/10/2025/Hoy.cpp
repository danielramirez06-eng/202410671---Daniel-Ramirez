#include <iostream>
using namespace std;

void wordsCounter() {
    string original = "Hola mundo";
    int counter = 1; // empieza en 1 porque hay al menos una palabra

    for (int i = 0; i < original.size(); i++) {
        char letter = original[i];
        if (letter == ' ') {
            counter++;
        }
    }

    cout << "Numero de palabras: " << counter << endl;
}


void inverString() {
    string texto;
    cout << "Ingresa una cadena: ";
    getline(cin, texto);

    cout << "Cadena invertida: ";
    for (int i = texto.size() - 1; i >= 0; i--) 
    {
        cout << texto[i];
    }
    cout << endl;
}



void removeVowels() {
    string originalString = "Hola Daniloot";
    string newString = "";

    for (size_t i = 0; i < originalString.size(); i++) 
    {
        char letter = originalString[i];
        

        if (letter != 'a' && letter != 'e' && letter != 'i' && letter != 'o' && letter != 'u' &&
            letter != 'A' && letter != 'E' && letter != 'I' && letter != 'O' && letter != 'U') 
        {
            newString += letter;
        }
    }

    cout << "Frase sin vocales: " << newString << endl;
}

void duplicateStringCharacters() {
    string originalString;

    cout << "Escribe una frase: ";
    getline(cin, originalString);  

    cout << "Frase con caracteres duplicados: ";

    for (size_t i = 0; i < originalString.size(); i++) {
        char letter = originalString[i];

        if (letter != ' ') 
        {
            cout << letter << letter;  
        } 
        else 
        {
            cout << letter;  
        }
    }

    cout << endl;  
}


void replaceSpaceWithMiddleGuiderString() {
    string originalString = "Hola mundo soy Daniel";
    string newString = "";

    for (size_t i = 0; i < originalString.size(); i++) 
    {
        char letter = originalString[i];
        if (letter == ' ') 
        {
            newString += "-";
        } 
        else 
        {
            newString += letter;
        }
    }

    cout << newString << endl;
}

int main() {
    wordsCounter();
    return 0;
}

