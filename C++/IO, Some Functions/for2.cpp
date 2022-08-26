#include <iostream>

int main ()
{
  int sum = 0, times = 0;
  for (int valt = 0; std::cin >> valt; times++)
    sum += valt;
  std::cout << "Sum: " << sum << " Times: " << times << std::endl;
  return 0;
}
