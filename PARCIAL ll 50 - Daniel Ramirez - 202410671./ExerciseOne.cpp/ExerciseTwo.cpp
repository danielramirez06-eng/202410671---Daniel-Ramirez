#include <iostream>

using namespace std;

//Aqui vemos si la respuesta es correcta o incorrecta.

bool isCorrect (char userAnswer, char correctAnswer)
{
    return userAnswer == correctAnswer;
}

int questionScore (bool correct)
{
    if (correct) 
    {
        return 10;
    } 
    else 
    {
        return 0;
    }
}

//Aqui inicia el cuestionario.
void playQuiz(){
    char answer1, answer2, answer3;
    int totalScore = 0;

    cout << "¿Cual es la capital de Casanare?" << endl;
    cout << " A.) Tunja    B.)La paz    C.)Yopal" << endl;
    cout << "Tu respuesta: ";

    cin >> answer1;

    cout << "¿Cual es una planta?" << endl;
    cout << " A.) Televisor    B.)Cilantro   C.)Tulipan" << endl;
    cout << "Tu respuesta: ";

    cin >> answer2;

    cout << "Pregunta 3: ¿Cuál es el símbolo químico del agua?" << endl;
    cout << "a) H2O  b) O2  c) CO2" << endl;
    cout << "Tu respuesta: ";
    cin >> answer3;

    // Aqui vemos si lo que seleccione el usuario es correcto o no.

    totalScore += questionScore(isCorrect(answer1, 'C')); 
    totalScore += questionScore(isCorrect(answer2, 'C')); 
    totalScore += questionScore(isCorrect(answer3, 'A'));

    cout << "Puntaje final: " << totalScore << endl;
}

int main() {
    playQuiz();
    return 0;
}
    

 





  



