#include <iostream>

int main () {
  int i, &ri = i;
  i = 5; ri = 10;
  std::cout << i << " " << ri << std::endl;
  int biri = 0;
  int *kek = &biri;
  *kek = 5;
  std::cout << *kek << biri << std::endl;
  kek = nullptr;
  std::cout << kek << biri << std::endl;
  int &lol = ri;
  std::cout << lol << std::endl;
  int fac = 4, *fac1 = &fac;
  *fac1 = *fac1 * *fac1;
  std::cout << fac << std::endl;
  int f = 5;
  const int x = f;
  std::cout << x;
}
