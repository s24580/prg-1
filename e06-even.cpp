/*Wydrukuj sumę wszystkich PARZYSTYCH liczb przekazanych jako argumenty. 
	Przykład:
		./e06-even 1 2 3 4 ➞ WYDRUKUJE: "6"
		./e06-even 1 1 1 1 ➞ WYDRUKUJE: "0"
		./e06-even -1 -2 -3 -4 ➞ WYDRUKUJE: "-6"
	Zapisz program jako e06-even.cpp (UWAGA zmieniłem literkę)*/

#include <iostream>

int main(int argc ,char* argv[])
{
	int suma =0 ,x=0;
	for (int i = 1; i < argc ; i++)
	{
	x = std::stoi(argv[i]);
		if (x%2 == 0)
		{
		suma += x;
		}
	}
	std::cout << "suma: " << suma << "\n" ;
return 0;	 
}
