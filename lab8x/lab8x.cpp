#include <fstream>
#include <iostream>
#include <string>

void liczby_nieujemne(int n, std::string nazwa) {
	
	std::ofstream plik(nazwa);
	for (int i = 0; i < n; i++) {
		plik << i << std::endl;
	}
	plik.close();
}

void odczytywanie(std::string nazwa) {

	std::ifstream plik(nazwa);
	std::string tekst = "qweqeqeweqqw";
	std::getline(plik, tekst);
	std::cout << tekst;
	plik.close();
}


int main()
{
	//zadanie 1,2
	/*
	int liczby;
	std::string nazwa_pliku = "wynik.txt";
	std::string nazwa_pliku2 = "odczytywanie.txt";
	std::cout << "" << std::endl;
    odczytywanie(nazwa_pliku2);
	std::cout << "podaj liczby: " << std::endl;
	std::cin >> liczby;
	liczby_nieujemne(liczby, nazwa_pliku);
	*/

	// zadanie 3 

	int liczby; 
	std::string nazwa_pliku;
	std::cout << "Podaj nazwe pliku: " << std::endl;
		
	

}

