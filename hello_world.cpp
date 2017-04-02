#include <iostream> // #include - dyrektywa załączenia pliku (w nawiasie ostrym lub cudzysłowiu; iostream - biblioteka obsługująca operacje wejścia i wyjścia, umożliwia wyświetlenie tekstu na ekranie

//using namespace std; // przestrzeń nazwy, std - standardowa dla C++

int main(void)
{
	std::cout << "Czesc!";
	std::cout << std::endl;
	
	std::cout << "Czesc!" << std::endl;

	std::cout << "Czesc!";
	std::cout << " ";

	std::cout << "Kurde, zacialem sie...";
	std::cout << std::endl;
	
	return 0;
}
