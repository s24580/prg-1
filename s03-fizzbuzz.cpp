#include <iostream>


int main()
{
    int n;
    
    std::cout << "podaj liczbe: ";    
    std::cin >> n;
    for (int x = 1 ; x <= n ; x++)
    {
        std::cout << x << " ";
        if (x%3 == 0 && x%5 == 0)
        std::cout << "fizz buzz";
        else if (x%5 == 0)
        std::cout << "buzz";
        else if (x%3 == 0)
        std::cout << "fizz ";
        std::cout << "\n";
    }    

    return 0;


}
