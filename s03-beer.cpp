#include <iostream>

int main() 
{
    int i = 99;
    
    while (i > 0)
    {  
        std::cout << i <<" bottles of beer on the wall," << i << " bottles of beer.\n";
        std::cout << "Take one down,pass it around," << (i-1) << " bottles of beer on the wall...\n";
        i--;
    }
     std::cout << "No more bottles of beer on the wall, no more bottles of beer.\n" << "Go to the store buy some more, 99 bottles of beer on the wall...\n";
    
    return 0;
}
