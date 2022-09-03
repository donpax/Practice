#include <iostream>
#include <string>
#include <vector>
//#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
//using std::begin;
//using std::end;

int main () {
  vector<int> v1;
  vector<int> v2(10);
  vector<int> v3(10, 42);
  vector<int> v4{10};
  vector<int> v5{10, 42};
  vector<string> v6{10};
  vector<string> v7{10, "hi"};
  vector<vector<int>> v1_v5 {v1, v2, v3, v4, v5};
  vector<vector<string>> v6_v7 {v6, v7};
  for (auto x1 = v1_v5.cbegin(); x1 != v1_v5.cend(); x1++) {
    for (auto x1_1 = x1->cbegin(); x1_1 != x1->cend(); x1_1++) {
      cout << *x1_1;
    }
    cout << endl;
  }
  for (auto x2 = v6_v7.cbegin(); x2 != v6_v7.cend(); x2++) {
    for (auto x2_1 = x2->cbegin(); x2_1 != x2->cend(); x2_1++) {
      cout << *x2_1;
    }
    cout << endl;
  }
  return 0;
}
