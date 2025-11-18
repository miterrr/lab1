
#include <iostream>
#include <math.h>
#include <string>


float szescian(float t) {
    return t * t * t;
}
float potega(float p, int n) {


    return pow(p, n);
}
float odleglosc(float x1, float x2, float y1, float y2) {
   
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

}

int znaki(std::string tekst){
    int x = 0;
    for (int i = 0; i < tekst.length(); i++) {
        if (tekst[i] == 'a') {
            x++;
        }

    }

    return x;

}


int main()
{
    // zadanie 1 

    /*

    float x, y, a;
    int n;
    std::cout << "Podaj liczbe: ";
    std::cin >> x;
    std::cout << "Twoj wynik to: " << szescian(x) << std::endl;

    */

    //zadanie 2 

    /*
    float x;
    int y;
    std::cout << "Podaj liczbe zmiennoprzecinkowa: ";
    std::cin >> x;
    std::cout << "Podaj potege liczby zmiennoprzecinkowej: ";
    std::cin >> y;
    std::cout << "Twoj wynik to: " << potega(x, y);
    */

    //zadanie 3 
    /*
    float p, q, a, b;
    std::cout << "Podaj wspolrzedna x pierwszego punktu :";
    std::cin >> p;
    std::cout << "Podaj wspolrzedna y pierwszego punktu: ";
    std::cin >> q;
    std::cout << "Podaj wspolrzedna x drugiego punktu :";
    std::cin >> a;
    std::cout << "Podaj wspolrzedna y drugiego punktu: ";
    std::cin >> b;
    std::cout << "Odleglosc euklidesowa wynosi: " << odleglosc(p, a, q, b);
    */

    //zadanie 4
    /*
    std::string tekst1;
    int a;
    std::cout << "Podaj lancuch znakow :";
    std::cin >> tekst1;
    std::cout << "Liczba liter a to: " << znaki(tekst1);

    */



}


