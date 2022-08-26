#include <iostream>

int main () {
  const int const_1 = 5;
  const int &ref_1 = const_1;
  std::cout << const_1 << ref_1 << std::endl;
  int var_1 = 10;
  const int &ref_2 = var_1;
  std::cout << var_1 << ref_2 << std::endl;
  var_1 = 5;
  std::cout << var_1 << ref_2 << std::endl;
  const int x = 5;
  const int &y = x;
}
