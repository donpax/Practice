#include <iostream>

int main()
  {
  std::cout << "Hello, world!" << std::endl;
  std::cout << "Enter two numbers: " << std::endl;
  int n1 = 0, n2 = 0;
  std::cin >> n1 >> n2;
  std::cout << "The product of a number " << n1 << " and a number " << n2
  << " is " << n1 * n2 << "." << std::endl;
  std::cout << /* "*/" /* "/*" */;
  return 0;
  }
