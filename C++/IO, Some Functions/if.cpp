#include "iostream"

int main ()
{
  int currVal = 0, val = 0;
  if (std::cin >> currVal)
  {
    int times = 0;
    times = 1;
    while (std::cin >> val)
    {
      if (currVal == val)
        times ++;
      else
      {
        std::cout << currVal << " - " << times << " times" << std::endl;
        currVal = val;
        times = 1;
      }
    }
    std::cout << currVal << " - " << times << " times" << std::endl;
  }
  return 0;
}
