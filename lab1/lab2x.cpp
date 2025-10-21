// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


int main()
{

    //// zadanie 1 
    //int x;
    //int i;

    //std::cout << "Podaj liczbe x";
    //std::cin >> x;
    //   
    //for (i = 0; i <= x; i++) {
    //    std::cout << "liczby to: " << i << std::endl; 
    //}

     
    // zadanie 2 

    //int i; 
    //std::cout << "Podaj liczbe i";
    //std::cin >> i;
    //do {
    //    std::cout << "Liczby to: " << i << std::endl;
    //    i--;

    //} while (i >= 1);

  // zadanie 3 

    double x;
    char odp;
    char suma = 0;
    int max;
    double avg = 0.0; 
    int min;
    
   


    do {

        std::cout << "Podaj liczbê: " << std::endl;
        std::cin >> x;   
        suma++;
        avg += x;
        if (suma == 1) {
            min = x;
            max = x;


        }
        if (x>max)
        {

            max = x;
        } if (x < min) {
            min = x;
        }

            

        std::cout << "Czy to koniec wprowadzania wartoœci? T/N" << std::endl;
        std::cin >> odp;
  

    } while (odp == 'N');
     std::cout << "Wartoœæ minimalna to: " << min << std::endl;
     std::cout << "Wartoœæ maksymalna to: " << max << std::endl;
     std::cout << "Wartoœæ œrednia to: " << avg/suma << std::endl;

     // zadanie 4 

     std:: 



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
