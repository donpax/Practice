#include <iostream>
#include <string>
#include "Sales_data.h"

struct Foo {};
//struct Sales_data {
//  std::string  isbn;
//  unsigned int numbers_sold = 0;
//  double revenue = 0.0;
//};
int main () {
  Sales_data book1, book2;
  double price = 0.0;
  std::cin >> book1.isbn >> book1.numbers_sold >> price;
  book1.revenue = book1.numbers_sold * price;
  std::cin >> book2.isbn >> book2.numbers_sold >> price;
  book2.revenue = book2.numbers_sold * price;
  if (book1.isbn == book2.isbn) {
//    Sales_data sum;
//    sum.revenue = book1.revenue + book2.revenue;
    std::cout << book1.isbn
              << " " << book1.numbers_sold + book2.numbers_sold
              << " " << book1.revenue + book2.revenue << std::endl;
  }
  else {
    std::cerr << "Error: Books have different ISBN!" << std::endl;
    return -1;
  }
  return 0;
}
