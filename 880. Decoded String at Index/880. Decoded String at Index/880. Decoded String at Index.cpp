// 880. Decoded String at Index.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long numOfDigits = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] > 57)
            {
                numOfDigits++;
            }
            else
            {
                numOfDigits *= s[i] - '0';
            }
        }


        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] < 58)
            {
                numOfDigits /= (s[i] - '0');
                k = k % numOfDigits;
            }
            else
            {
                if (k == 0 || numOfDigits == k)
                {
                    return string("") + s[i];
                }
                numOfDigits--;
            }
        }

        return "";
    }
};

int main()
{
    
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
