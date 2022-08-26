#include <iostream>
#include "Sales_item.h"

int main () {
//  Sales_item book;
//  while (std::cin >> book) {
//    std::cout << book << std::endl;
//  }
//
//  Sales_item book1, book2;
//  while (std::cin >> book1 >> book2) {
//    std::cout << book1 + book2 << std::endl;
//  }

  Sales_item book_n, book_s;
  while (std::cin >> book_n) {
    book_s += book_n;
    std::cout << book_s << std::endl;
  }
  std::cout << book_s << std::endl;
  return 0;
}
