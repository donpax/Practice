#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main () {
//  int m;
//  string n;
//  cin >> m >> n;
//  vector<string> str(m, n);
//  cout << str[1] << endl;
/*
  vector<int> a;
  int b;
  while (cin >> b) {
    a.push_back(b);
  }
  decltype(a.size()) c = 0;
  while (c < a.size()) {
    cout << a[c] << " ";
    c++;
  }
*/
  vector<string> as;
  string bs;
  while (cin >> bs) {
    as.push_back(bs);
  }
  decltype(as.size()) cs = 0;
  while (cs < as.size()) {
    cout << as[cs] << " ";
    cs++;
  }
  return 0;
}
