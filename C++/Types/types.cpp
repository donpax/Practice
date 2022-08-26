#include <iostream>

int main () {
  unsigned char x = 200;
  std::cout << x << std::endl;
  std::cout << "a really, really long string literal "
               "that spans two lines" << std::endl;
  unsigned u = 10, u2 = 42;
  std::cout << u2 - u << std::endl;
  std::cout << u - u2 << std::endl;
  int i = 10, i2 = 42;
  std::cout << i2 - i << std::endl;
  std::cout << i - i2 << std::endl;
  std::cout << i - u << std::endl;
  std::cout << u - i << std::endl;
  std::cout << "\tHi!\n";
  std::cout << "2\tM" << std::endl;
  u = 12,2;
  std::cout << u << std::endl;
  int _;
  int i10 = 100, sum = 0;
    for (int i10 = 0; i10 != 10; ++i10)
    sum += i10;
  std::cout << i10 << " " << sum << std::endl;
  return 0;
}
