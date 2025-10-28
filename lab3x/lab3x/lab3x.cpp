// lab3x.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

int main()
{
    //zadanie 1 
    /*
    const int n = 10;
    int i, tab[n];
    
    srand(time(nullptr));
        for (i = 0; i < n; i++) {
        tab[i] = rand() % 101;
        std::cout << tab[i] << std::endl;

    }*/ // zadanie 2 
    /*
    const int n = 10;
    int i, tab[n];
    int min, max;
    srand(time(nullptr));
    for (i = 0; i < n; i++) {
        tab[i] = rand() % 50;
        if (i == 0) {
            min = tab[i];
            max = tab[i];

        } 
        if (i > max) {
            max = tab[i];
            
        } 
        if (i < min) {

            min = tab[i];

        }

        std::cout << tab[i] << " " << std::endl;
    }

    std::cout << "max = " << max << std::endl;
    std::cout << "min = " << min << std::endl;
    */
    /*
    const int n = 5;
    int i, tab[n], tab2[n];
    srand(time(nullptr));
    for (i = 0; i < n; i++){
        tab[i] = rand() % 10;
        std::cout << tab[i] << " " << std::endl;
    
    }  
    std::cout << " " << std::endl; 
    for (i = 0; i < n; i++) {
        tab2[i] = tab[n - 1 - i];
        std::cout << tab2[i] << " " << std::endl;
    }
    */

    //zadanie 4

    const int n;
    int tab[10][10];
    for (i = 0; i < n; i++) {
        std::cout << tab[i] << std::endl;

    } for 



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
