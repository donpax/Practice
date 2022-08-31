#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main () {
  string str0("Hello, World!");
  for (auto c0 : str0)
    if (!isspace(c0) && !ispunct(c0)) {
      c0 = 'X';
    }
  cout << str0 << endl;

  string str1("Hello, World!");
  for (auto &c1 : str1)
    if (!isspace(c1) && !ispunct(c1)) {
      c1 = 'X';
    }
  cout << str1 << endl;

  string str2("Hello, World!");
  decltype (str2.size()) c2 = 0;
  while (c2 != str2.size()) {
    if (!isspace(str2[c2]) && !ispunct(str2[c2])) {
      str2[c2] = 'X';
    }
    c2++;
  }
  cout << str2 << endl;

  string str3("Hello, World!");
  for (decltype (str3.size()) c3 = 0; c3 != str3.size(); c3++)
    if (!isspace(str3[c3]) && !ispunct(str3[c3])) {
      str3[c3] = 'X';
    }
  cout << str3 << endl;

  string str4("Hey, Martin! What's up?");
  for (auto &c4 : str4) {
    char zero_c = ' ';
    if (isspace(c4) || ispunct(c4)) {
      c4 = zero_c;
    }
  }
  cout << str4 << endl;

  string str5;
  getline(cin, str5);
  for (auto &c5 : str5) {
    char zero_c = ' ';
    if (isspace(c5) || ispunct(c5)) {
      c5 = zero_c;
    }
  }
  cout << str5 << endl;
  return 0;
}
