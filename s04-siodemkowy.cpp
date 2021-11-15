/*2. Napisz program, który pobierze jako argument liczbę zapisaną w systemie dziesiętnym i przeliczy ją na system siódemkowy.
Wynik wydrukuj na std::cout. Zapisz program jako s04-siodemkowy.cpp*/

#include <iostream>
#include <vector>

auto main (int argc,char*argv[])-> int {
	int x = std::stoi(argv [1]);
	int y,z,i;
 std::vector <int> tab ;

	//std::cout << "podaj lizczbe: ";
	//std::cin >> x;
	
	 
	while (x > 0) 
	{
		y = x%7 ;
		tab.push_back(y);
		x /= 7 ;
		
	} 
	z = tab.size();	
	if (tab[z] == 0){
		for (int j = tab.size()-1 ; j >= 0  ; j--){
			std::cout << tab [ j ];
		}
	
	}
	else {
		for (int j = tab.size() ; j >= 0  ; j--){
			std::cout << tab [ j ];
		}
	}

	std::cout << "\n";

return 0; 	




}
