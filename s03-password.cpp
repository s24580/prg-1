#include <iostream>
#include <string>

int main ()
{
    std::string pass = "student";   //ustalamy nazwe stringa z dobrym hasłem
    std::string input;  //string z nazwą na to co wpisujemy

    do //rób to 
    {
        std::cout << "hasło?\n" ;   //zapytanie o hasło
        std::getline (std::cin,input) ;     //prosi o wpisanie hasła   
        if (pass == input)      //sprawdza czy jest dobre
        std::cout <<"git\n" ;   // jeśli tak to "git"
    
    }
    while (pass != input);  // dopóki jesli sie zgadza to return 0 i koniec
    return 0;
}
    
 



    



    
