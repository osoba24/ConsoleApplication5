// ConsoleApplication5.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <conio.h>
using namespace std;

int main(int argc, char* argv[])
{
    while (true) {
        cout << "Input note: ";
        int getch();
        char note = getch();
        cin >> note;

        //do re mi fa sol la si do re mi fa sol
        if (note == '1') {
            Beep(468, 267);
        }
        if (note == '2') {
            Beep(500, 1000);
        }
        if (note == '3') {
            Beep(329, 100);
        }
        if (note == '4') {
            Beep(349, 100);
        }
        if (note == '5') {
            Beep(392, 100);
        }
        if (note == '6') {
            Beep(440, 100);
        }
        if (note == '7') {
            Beep(493, 100);
        }
        if (note == '8') {
            Beep(523, 100);
        }
        if (note == '9') {
            Beep(587, 100);
        }
        if (note == '0') {
            Beep(659, 100);
        }
        if (note == '\'') {
            Beep(698, 100);
        }
        if (note == '\\') {
            Beep(784, 100);
        }

        //rebemol mibemol solbemol labemol sibemol rebemol mibemol solbemol
        if (note == 'w') {
            Beep(277, 100);
        }
        if (note == 'e') {
            Beep(311, 100);
        }
        if (note == 't') {
            Beep(370, 100);
        }
        if (note == 'y') {
            Beep(415, 100);
        }
        if (note == 'u') {
            Beep(466, 100);
        }
        if (note == 'o') {
            Beep(554, 100);
        }
        if (note == 'p') {
            Beep(622, 100);
        }
        if (note == ']') {
            Beep(740, 100);
        }

        system("cls");
    }

    return EXIT_SUCCESS;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
