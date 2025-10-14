// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //zadanie 1 
    /*int a = 10;
    int b = 5;

    std::cout << a + b;*/



    //zadanie 2

   /* int a;
    int b;

    std::cout << "Podaj liczbe a";
    std::cin >> a;
    std::cout << "Podaj liczbe b";
    std::cin >> b;
    std::cout << "Wynik to: " << a + b;*/

    //zadanie 3 

    /*int a;
    int b;

    std::cout << "Podaj liczbe a";
    std::cin >> a;
    std::cout << "Podaj liczbe b";
    std::cin >> b;
    std::cout << "Wynik to: " << (-b / a);*/

    //zadnie 4 

    //double a1, b1, c1, a2, b2, c2, x, y;
    //std::cout << "Podaj liczby do pierwszego rownania: ";
    //std::cin >> a1 >> b1 >> c1;
    //std::cout << "Podaj liczby do drugiego rownania: ";
    //std::cin >> a2 >> b2 >> c2;
    //double W, Wx, Wy;
    //W = a1 * b2 - b1 * a2;
    //Wx = c1 * b2 - b1 * c2;
    //Wy = a1 * c2 - c1 * a2;
    //if (W != 0)

    //{
    //    x = (Wx / W);
    //    y = (Wy / W);
    //    std::cout << "X = " << x << std::endl;
    //    std::cout << "Y = " << y;
    //}

    //else if (W == 0 && Wx == 0 && Wy == 0) {

    //    std::cout << "uklad jest nieoznaczony, posiada nieskonczenie wiele rozwiazan";

    //}
    //else {

    //    std::cout << "uklad rownan jest sprzeczny";

    //}
     //zadanie 5 


    double a, b, c, d;
    double x1, x2;

    std::cout << "Podaj liczby a, b oraz c rownania kwadratowego";
    std::cin >> a >> b >> c; 
    if (a != 0)
    {
        d == (b * b - 4 * a * c);
        x1 == (b - sqrt(d)) / (2 * a);
        x2 == (b + sqrt(d)) / (2 * a);
        std::cout << "x1 = " << x1;
        std::cout << "x2 = " << x2; 



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
