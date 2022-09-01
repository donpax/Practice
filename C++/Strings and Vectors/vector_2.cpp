#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <typeinfo>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::toupper;

int main () {
  vector<int> v1;
  vector<int> v2(10);
  vector<int> v3(10, 42);
  vector<int> v4{10};
  vector<int> v5{10, 42};
  vector<string> v6{10};
  vector<string> v7{10, "hi"};
  vector<vector<int>> v1_v5 = {v1, v2, v3, v4, v5};
  vector<vector<string>> v6_v7 = {v6, v7};
  for (auto v_number : v1_v5) {
    for (auto v_element : v_number) {
      cout << v_element;
    }
    cout << endl;
  }
  for (auto v_number : v6_v7) {
    for (auto v_element : v_number) {
      cout << v_element;
    }
    cout << endl;
  }

  vector<string> x;
  string t;
  while (cin >> t) {
    x.push_back(t);
  }
  for (auto &el : x) {
    for (auto &chr : el) {
      chr = toupper(chr);
    }
  }
  int n = 0;
  double m = 0;
  while (n < x.size()) {
    if (!(m/8 == 1) && !(m/8 == 2) && !(m/8 == 3)) {
      cout << x[n] << " ";
      n++;
      m = n;
    }
    else {
      cout << endl << x[n] << " ";
      n++;
      m = n;
    }
  }
  return 0;
}
