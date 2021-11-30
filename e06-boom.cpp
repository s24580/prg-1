/*Jako argument programu będzie podana intensywność wybuchu czyli liczba całkowita "n".
Program ma wydrukować "Boom", w konfiguracji zależnej od poniższych warunków:
	- Drukowany tekst powinien zawierać n znaków "o",
		chyba, że n jest mniejsze niż 2 – w takim wypadku powinien wydrukować "boom" bez sprawdzania pozostałych warunków
	- Jeśli n jest podzielne na 2 dodaj na końcu wykrzyknik
	- Jeśli n jest podzielne na 5 wszytko powinno być drukowane KAPSLOKIEM
	Przykład:
		./e06-boom 4 ➞ WYDRUKUJE: "Boooom!"
		./e06-boom 1 ➞ WYDRUKUJE: "boom"
		./e06-boom 5 ➞ WYDRUKUJE: "BOOOOOM"
		./e06-boom 10 ➞ WYDRUKUJE: "BOOOOOOOOOOM!"
	Zapisz program jako e06-boom.cpp (UWAGA zmieniłem literkę)*/
	




#include <iostream>


int main(int argc, char *argv[])
{
    int n = std::atoi(argv[1]);
    if(n < 2)
    {
        std::cout << "boom";
        return 0;
    }
    std::cout << (n % 5 == 0 ? "B" : "b");

    for(int i = 0; i< n; ++i)
        {
        std::cout << (n % 5 == 0 ? "O" : "o");
        
        }
	std::cout << (n % 5 == 0 ? "M" : "m");
	
    if(n % 2 == 0 && n % 5 == 0 ? "M" : "m")
        {
         std::cout << "!\n";
        }


    return 0;
}
