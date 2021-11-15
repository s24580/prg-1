#include <iostream>
#include <string>

struct Celsius {
	
	float temp;
	
	std::string C ;
	auto to_string() const -> std::string;
};


auto main (int argc, char*argv[]) -> int
{
	
	auto const x = std::stof(argv[1]); 
	Celsius t;
	t.temp = x;
	t.C = "°C";
	
	if (x <= -273.15)
	{ 
		std::cout << "-273.15" << t.C << "\n";
	}
	else
	{
		std::cout  << t.temp << t.C <<"\n";
	}
	
return 0;

}
// nie wiem pomocy :')
