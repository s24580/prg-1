#include <iostream>
//lcizby ujemne do zera


int main ()

{
    int x; 
    std::cout << "wprowadz liczbe: ";
    std::cin >> x;  // wpisywana liczba to x
    
// 
    if(x > 0){    //jesli x>0 
    for (int i = x; i >= 0; i--)// to zmienna i to x , (warunek) i wieksze rowne 0 ; i tu i-- to znaczy ze odlicza w dół
    {
        std::cout << i << "...\n"; // wypisuje i z ...
     }}
    
    else{ //
     
    for (int i = 0; i >= x; i--)// od 0 do - ileś
    {
        std::cout << i << "...\n";
     }}

        return 0;
    


}
