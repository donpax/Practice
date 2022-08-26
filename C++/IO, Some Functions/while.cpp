#include <iostream>

int main()
  {
    int sum = 0, val = 0;
    while(val <= 10)
      {
        sum += val;
        val ++;
      }
    std::cout << "The sum of numbers from 50 to 100 is "
    << sum << std::endl;

    int num = 10;
    while(num >= 0)
      {
        std::cout << " " << num << " ";
        num --;
      }

    int num1 = 0, num2 = 0, orig1 = 0, orig2 = 0;
    std::cout << "Enter two integers: " << std::endl;
    std::cin >> num1 >> num2;
    orig1 = num1, orig2 = num2;
    while(num1 <= num2)
      {
        std::cout << num1 << std::endl;
        num1 ++;
      }
    num1 = orig1, num2 = orig2;
    while(num2 <= num1)
      {
        std::cout << num2 << std::endl;
        num2 ++;
      }

    int sum2 = 0;
    for(int i = -10; i <= 100; i++)
      sum2 += i;
    std::cout << sum2 << std::endl;

    int sum1 = 0;
    for(int i1 = 10; i1 >= 0; i1--)
      sum1 += i1;

    int sum3 = 0, times = 0;
    for (int valt = 0; std::cin >> valt; times++)
      sum3 += valt;
    std::cout << sum3 << times << std::endl;
    return 0;
  }
