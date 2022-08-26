#include <iostream>

int y = 10;
int main () {
  int x = 5;
  int *x1 = &x, *y1 = &y;
  std::cout << x1 << "\n" << y1 << std::endl;
  std::cout << x1 << "\n" << y1 << std::endl;
  std::cout << x1 << "\n" << y1 << std::endl;

  int i = 0, &r = i;
  auto a = r; // a is an int (r is an alias for i, which has type int
  const int ci = i, &cr = ci;
  auto b = ci; // b is an int (top-level const in ci is dropped)
  auto c = cr; // c is an int (cr is an alias for ci whose const is top-level)
  auto d = &i; // d is an int* (& of an int object is int*)
  auto e = &ci; // e is const int* (& of a const object is low-level const)
  auto &g = ci; // g is a const int& that is bound to ci

  std::cout << "a = " << a << "\n"
            << "b = " << b << "\n"
            << "c = " << c << "\n"
            << "d = " << d << "\n"
            << "e = " << e << "\n"
            << "g = " << g << std::endl;
  a = 42;
  b = 42;
  c = 42;
  // d = 42;
  // e = 42;
  // g = 42;
  std::cout << "a = " << a << "\n"
            << "b = " << b << "\n"
            << "c = " << c << "\n"
            << "d = " << d << "\n"
            << "e = " << e << "\n"
            << "g = " << g << std::endl;

  const int i = 42;
  auto j = i; const auto &k = i; auto *p = &i;
  const auto j2 = i, &k2 = i;
}
