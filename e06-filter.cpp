/*Ze stringów przekazanych w argumentach wydrukuj po spacjach tylko te w których wszystkie literki są takie same.
	Przykład:
		./e06-filter "aaa" "bbb" "ccc" ➞ WYDRUKUJE: "aaa bbb ccc"
		./e06-filter "a" "bc" "dd" ➞ WYDRUKUJE: "a dd"
		./e06-filter "hey" ➞ WYDRUKUJE: nic nie wydrukuje
	Zapisz program jako e06-filter.cpp (UWAGA zmieniłem literkę)*/

#include <iostream>
#include <cstring>
#include <string>
int main (int argc, char* argv[])

{
	char *tab = new char [100];	
	int a=0,b=0;
	std::string x;
	 for (int i = 1 ; i < argc ; i++)
	{
	x = argv [i];
		for (int j= 0 ; j < x.size() ; j++)
		{
			if (x [j] == x[j+1])
				{
				a = 1 ;			
				}
				else 
				{
				break;
				}
			if (j == x.size()-1 && a == 1 )
				{
				tab [i] = x* ;				
				}
		}
	b++;
	}
	for (int i = 0 ; i <= b ; i++)
	{
	std::cout << tab [i] << " ";	
	}

std::cout << "\n";
return 0;
}
