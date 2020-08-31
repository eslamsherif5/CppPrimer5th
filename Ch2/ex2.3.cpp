#include <iostream>

int main()
{
  unsigned u = 10;
  int i = 11;
  std::cout << u - i << std::endl;
  u = 4; i=-10;
  float c = i = 5.5;
  std::cout << c - u << " " <<  c<<std::endl;
  std::cout << "Who goes with F\145rgus? \012" << std::endl;
   
  return 0;
}