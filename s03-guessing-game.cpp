#include <iostream>
#include <time.h> //biblioteka potrzebna do rng liczby

int main()
{
    //losowanie liczby to taki randomizer
    srand(time(NULL));    



    int x = (rand()%100) ;//liczba wygenerowana "losowo"
    int y ;// to co my wpisujemy  
    std::cout << "podaj liczbe: \n";    
    //musimy loopować to co bedzie odpowiadał na naszą odpowiedz   
     do 
    { 
        std::cin >> y;//odpowiedz 
        if (y < x)  
        {
            std::cout << "too small!\n";
        }   
        else if (y > x)
        {
            std::cout << "too big!\n"; 
        }
        else 
        {
            std::cout << "just right!\n"; 
        }         
    }
    while (y != x);//warunek spełniony dopóki warunek w nawiasie spełniony
    return 0;


}
