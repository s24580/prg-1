#include <iostream>
#include <string>
#include <vector>


auto main (int argc, char* argv[]) -> int
{
    for (int i=0; i<argc; i++)
{
    std::cout << argv[i] << " ";
}
  std::endl;
  return 0;
}
