#include <iostream>
#include "Sales_item.h"

int main () {
/*  Sales_item book_n, book_s;
 *  while (std::cin >> book_n) {
 *    book_s += book_n;
 *    std::cout << book_s << std::endl;
 *  }
 *    std::cout << book_s << std::endl;
 */

  Sales_item book1, book2;
  if (std::cin >> book1) {
    while (std::cin >> book2) {
      if (book1.isbn() == book2.isbn()) {
        Sales_item book_s;
        book_s += book2;
        std::cout << book_s << std::endl;
      }
      else {
        book1 = book2;
      }
    }
  }
  else {
    std::cerr << "No data!" << std::endl;
    return -1;
  }
  return 0;
}
