#include <iostream>
#include <string>

 
 int main () {
 	 
 	int i, n, j;
 	std::cout << "wysokosc trojkata:";
 	std::cin >> n;
 	
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
