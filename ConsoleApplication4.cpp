// ConsoleApplication4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>
#include <time.h>

std::vector<int> funkcja(int n) {
	std::vector<int>wek;
	for (int i = 0; i < n; i++) {
		wek.push_back(rand() % 101);
	}
	return wek;
}

std::vector<std::vector<double>> macierz(int w, int k){
	std::vector<std::vector<double>> macierz;
for (int i = 0; i < w; i++) {
	std::vector<double> temp;

	for (int j = 0; j < k; j++) {
		temp.push_back(rand() % 11);
	}
	macierz.push_back(temp);
}


return macierz;
}


int main()
{
	
	int n;
	std::cout << "Podaj liczbe n" << std::endl;
	std::cin >> n;
	std::cout << "" << std::endl;
	std::vector<int> wek = funkcja(n);
	int min = wek[0], max = wek[0];
	for (int i = 0; i < wek.size(); i++){
		std::cout<<wek[i] << std::endl;

		if (wek[i] < min) {
		  min = wek[i];
		}
		if (wek[i] > max) {
			max = wek[i];
		}
	}
	    std::cout << "minimum to: " << min << std::endl;
		std::cout << "maximum to: " << max;

		int w, k;
		std::cout << "Podaj ilosc wierszy: " << std::endl;
		std::cin >> w;
		std::cout << "Podaj ilosc kolumn: " << std::endl;
		std::cin >> k;
		std::vector<std::vector<double>> macierz(int w, int k);
		for (int i = 0; i < w; i++) {

			std::cout << macierz[i] << std::endl;
			for (int j = 0; i < k; i++) {

				std::cout << macierz[j];
			}
		}
		
	


}

