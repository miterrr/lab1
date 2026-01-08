#include <iostream>
#include <string>
#include <vector>

struct Usluga {
    std::string nazwa;
    unsigned int cena;
};

struct Klient {
    std::string imie; 
    std::string nazwisko;
    std::string rejestracja;
    struct Usluga usluga;
    
};


std::vector<Usluga> uslugi;

std::vector<Klient> klient_wektor;


void wyswietl_liste_uslug() {
    std::cout << std::endl << "===== LISTA USLUG =====" << std::endl;
    std::cout << std::endl;
    for (int i = 0; i < uslugi.size(); i++) {
        std::cout << i+1 << ". " << uslugi[i].nazwa << " " << uslugi[i].cena << std::endl;
    }
}

void wyswietl_kolejke() {

    std::cout << "===== KOLEJKA POJAZDOW ORAZ DANE KLIENTA ===== " << std::endl;
    for (int i = 0; i < klient_wektor.size(); i++) {
        std::cout << i+1 << ". " << klient_wektor[i].imie << " " << klient_wektor[i].nazwisko << " " << klient_wektor[i].rejestracja << " " << klient_wektor[i].usluga.nazwa << std::endl;
    }
}

void dodaj_usluge() {
    struct Usluga nowa_usluga;

    std::cout << "===== NOWA USLUGA =====" << std::endl;
    std::cout << std::endl;
    std::cout << "Podaj nazwe uslugi: ";
    std::cin >> nowa_usluga.nazwa;
    std::cout << "Podaj cene uslugi: ";
    std::cin >> nowa_usluga.cena;
    
    uslugi.push_back(nowa_usluga);
    wyswietl_liste_uslug();
}


void przyjmij_pojazd() {
    struct Klient pojazd;
    int numer_uslugi;
    std::cout << "===== Dodawanie pojazdu =====" << std::endl;
    std::cout << std::endl;
    std::cout << "Podaj imie klienta: ";
    std::cin >> pojazd.imie;
    std::cout << "Podaj nazwisko klienta: ";
    std::cin >> pojazd.nazwisko;
    std::cout << "Podaj rejestracje klienta: ";
    std::cin >> pojazd.rejestracja;
    std::cout << std::endl;
    std::cout << "Z jakiej uslugi korzysta klient? (podaj numer uslugi z listy uslug)" << std::endl;
    wyswietl_liste_uslug();
    std::cout << std::endl;
    std::cout << "> ";
    std::cin >> numer_uslugi;
    pojazd.usluga = uslugi[numer_uslugi - 1];
    klient_wektor.push_back(pojazd);
    wyswietl_kolejke();
}

void zakoncz_usluge() {
    int wybor;
    int przychod = 0;
    std::string zakonczona_usluga;
    std::cout << "Jaki klient zostal obsluzony? (podaj numer z listy)" << std::endl;
    wyswietl_kolejke();
    std::cout << std::endl << "> ";
    std::cin >> wybor; 
    // w tym miejscu naliczenie oplaty
   
    klient_wektor.erase(klient_wektor.begin() + (wybor-1) );
    // zakonczona_usluga = klient_wektor[klient_wektor.begin() + (wybor - 1)].usluga.nazwa;
    // zakonczona_usluga = klient_wektor[klient_wektor.begin() + (wybor - 1)].usluga.cena;
    // przychod = przychod + klient_wektor[klient_wektor.begin() + (wybor - 1)].usluga.cena;
    std::cout << "Klient o numerze " << wybor << " zostal usuniety." << std::endl;
    wyswietl_kolejke();
}


int main()
{
    bool koniec = false;
    char wybor;

    while (koniec == false) {
        std::cout << std::endl;
        std::cout << "===== MYJNIA SAMOCHODOWA =====" << std::endl;
        std::cout << "" << std::endl;
        std::cout << "1. Dodaj usluge" << std::endl;
        std::cout << "2. Przyjmij pojazd" << std::endl;
        std::cout << "3. Zakoncz usluge" << std::endl;
        std::cout << "4. Wyswietl kolejke" << std::endl;
        std::cout << "5. Raport dnia" << std::endl;
        std::cout << "6. Zapisz/Wczytaj" << std::endl;
        std::cout << "7. Koniec" << std::endl;
        std::cout << "" << std::endl;
        std::cout << "> Wybor: ";
        std::cin >> wybor;
        std::cout << std::endl;

        if (wybor == '1') {
            dodaj_usluge();
        }
        if (wybor == '2') {
            przyjmij_pojazd();
        }
        if (wybor == '3') {
            zakoncz_usluge();
        }
        if (wybor == '4') {
            wyswietl_kolejke();
        }
        if (wybor == '7') {
            koniec = true;
        }
    }

    
}


