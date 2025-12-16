
#include <iostream>
#include <cmath>
struct punkt {
    double x, y; 
};
struct prostokat {

    punkt a, b, c, d;

};
struct kolo {

    punkt c;
    double r; 

};
double odleglosc(punkt a, punkt b) {
    double wynik1 = b.x - a.x;
    double wynik2 = b.y - a.y;
    double odl = sqrt(pow(wynik1, 2) - pow(wynik2, 2));
    return odl;
}
double pole1(punkt a, punkt b) {
    double wynik1 = b.x - a.x;
    double wynik2 = b.y - a.y;
    double p1 = wynik1 * wynik2;
    return p1;
}
void pole2(punkt a, punkt b, punkt c, punkt d) {
    double wynik1 = b.x - a.x;
    double wynik2 = b.y - a.y;
    double p2 = wynik1 * wynik2;
    double wynik3 = d.x - c.x;
    double wynik4 = d.y - c.y;
    double p3 = wynik3 * wynik4;
    if (p3 > p2) {
        std::cout << "Pole drugiego prostokata jest wieksze od pola pierwszego" << std::endl;
    }
    else {
        std::cout << "Pole pierwszego prostokata jest wieksze od pola drugiego" << std::endl;
    }
}
double polek(double r) {

    double pole = (3.14 * pow(r, 2));
    return pole;
}
void okregi(kolo a, kolo b) {
    if (odleglosc(r1, r2) > (dlugosc)) {
        std::cout << "okregi sa rozlaczne zewnetrznie";
    }
    if (odleglosc(r1, r2) == (dlugosc)) {
        std::cout<<"okregi sa styczne zewnetrznie";
    }



}
int main()
{
    double promien = 5;
    punkt p1 = { 10, 10 }, p2 = { 3, 4 }, p3 = { 1, 1 }, p4 = { 5, 5 };
    std::cout << "Odleglosc pomiedzy dwoma punktami to: " << odleglosc(p1, p2) << std::endl;
    std::cout << "Pole prostokata to: " << pole1(p1, p2) << std::endl;
    pole2(p1, p2, p3, p4);
    std::cout << "Pole kola to: " << polek(promien);

}

