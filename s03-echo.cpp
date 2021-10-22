#include <iostream>
#include <string>


int main (int argc, char* argv[])
{
    for (int i=1; i <= 3; i++)
    {
        if (argv[i] == "-r" && argv[i+1]== "-l" )
        {
            for (int x = argc-1; x > 2 ; x--)
            {
                std::cout << argv[i] << "\n";
            }   
        }
        else if (argv[i] == "-r" && argv[i+1]== "-n")        
        {
            for(int x = argc-1; x > 2 ; x--)
            {
            std::cout << argv[i] << " ";
            }
         }
        else if (argv[i] == "-n")
        {
            for (int x=2 ; x<argc ; x++)
            {
                std::cout << argv[i] << " ";
            }
        } 
        else if (argv[i] == "-r")
        {
            for (int x = argc-1; x > 2 ; x--)
            {
                std::cout << argv[i] << "\n";
            }
        }
        else if (argv[i] == "-l")
        {
            for (int x=2 ; x<argc ; x++)
            {
                std::cout << argv[i] << "\n";
            } 
                
        }
        else 
        {
            for (int x=1 ; x<=argc ; x++)
            {
                std::cout << argv[i] << " ";
            } 
           std::cout << "\n";     
        }
      
        
    
    }
 
  return 0;
}
