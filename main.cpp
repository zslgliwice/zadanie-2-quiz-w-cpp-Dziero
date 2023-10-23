#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

bool askQuestion(const string& question, const string& correctAnswer) {
    string userAnswer;
    cout << question << endl;
    cout << "Twoja odpowiedz: ";
    cin >> userAnswer;
    system("cls");

    if (userAnswer == correctAnswer) {
        cout << "Poprawna odpowiedz!" << endl;
        return true;
    } else {
        cout << "Zle! Poprawna odpowiedz to: " << correctAnswer << endl;
        return false;
    }
}

int main() {

    string imie;
    cout << "Podaj imie: ";
    cin >> imie;
    system("cls");

    int pkt = 0;

const string questions[] = {
    "Co to jest C++?",
    "Ile wynosi 2 + 2?",
    "Jak nazywa sie stolica Francji?",
    "Kto napisal dramat Romeo i Julia?",
    "Ktora planeta jest czwarta w ukladzie slonecznym?",
    "Jak nazywa sie najwieksza rzeka na swiecie?",
    "Kto jest autorem Mona Lisy?",
    "Co to jest fotosynteza?",
    "Ile wynosi pierwiastek kwadratowy z 16?",
    "Ktory pierwiastek chemiczny ma symbol 'H'?",
    "Jakie panstwo jest znane jako 'Kraina Wschodzacego Slonca'?"
};

const string correctAnswers[] = {
    "Jezyk programowania",
    "4",
    "Paryz",
    "William Shakespeare",
    "Mars",
    "Nil",
    "Leonardo da Vinci",
    "Proces chemiczny w roslinach",
    "4",
    "Wodor",
    "Japonia"
};

    for (int i = 0; i < 5; ++i) {
        int randomIndex = rand() % 5;
        if (askQuestion(questions[randomIndex], correctAnswers[randomIndex])) {
            pkt++;
        }
    }

    cout << imie << ", zdobyles " << pkt << " punktow w quzie." << endl;

    return 0;
}