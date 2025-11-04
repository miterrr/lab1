// lab4x.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>


int main()

{
    //zadanie 1, 2 
    /*
    std::string tekst;
    int liczba=0;
    std::cout << "Podaj tekst: " << std::endl;
    //std::cin >> tekst;
    std::getline(std::cin, tekst);
    for (int i = 0; i < tekst.length() ; i++) {
        if (tekst[i] == 'a' || tekst[i] == 'e' || tekst[i] == 'i' || tekst[i] == 'o' || tekst[i] == 'u' || tekst[i] == 'y') {
            liczba++;
        }  
    }

    std::cout << "liczba samoglosek w tekscie to: " << liczba << std::endl;
    */
    //zadanie 3 
   /*
    std::string tekst, tekst2=" ";
    std::cout << "Podaj ciag znakow: " << std::endl;
    std::getline(std::cin, tekst);
    for (int i = tekst.length() - 1; i >= 0; i--)  {
        
        std::cout << tekst[i];


    } 
    
    */
    //zadanie 4 
    /*
    std::string tekst, tekst2; 
    std::cout << "Podaj tekst: " << std::endl;
    std::cin >> tekst;
    int licznik = 0;

    for (int i = 0; i < tekst.length()/2; i++) {
        if (tekst[i]==tekst[tekst.length()-1-i]) {
            licznik++;
        }

        

    }
    if (licznik == tekst.length()/2) {
        std::cout << "tekst jest palindromem" << std::endl;
    }
    else {
        std::cout << "tekst nie jest palindromem" << std::endl;
    }
    */
    //zadanie 5 
    /*
    std::string tekst1, tekst2;
    std::cout << "Podaj pierwszy napis: " << std::endl;
    std::cin >> tekst1;
    std::cout << "Podaj drugi napis: " << std::endl;
    std::cin >> tekst2; 
    for (int i = 0; i < tekst1.length(); i++) {
        if (tekst1[i] == tekst2[i]) {
            std::cout << "litera jest taka sama na pozycji: " << i+1 << std::endl;
        }

    }
    */

    //zadanie 6 

    std::string tekst1, tekst2;
    std::cout << "Podaj slowo do zaszyfrowania: " << std::endl;
    std::cin > tekst1;
    for (int i = 0; i < tekst1.length(); i++) {
        tekst1[i+2] 

    }


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
