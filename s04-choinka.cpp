#include <iostream>
#include <string>

 
 auto main (int argc, char*argv[]) -> int 
{
 	 auto n = std::stoi(argv[1]);
 	int i, j;
 	//std::cout << "wysokosc trojkata:";
 	//std::cin >> n;
 	
 	for (i=1 ; i<=n ; i++)
 	{
 		for (j=1; j<= 2*n-1 ; j++ )
 		{
	 		 if(j >=n-(i-1) && j <= n+(i-1))
	 		 	{	
	 			std::cout << "*";
	 		 	}
	 	
		 		else 
		 		{
		 		std::cout << " ";
		 		}
		}		
		 		std::cout << "\n";
	 } 
 /*
  *
 ***
*****
   */
 
 
 	return 0;
 }
