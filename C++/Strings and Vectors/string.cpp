#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

int main () {
  string x;
//  while (cin >> x)
//    cout << x;
//  while (getline(cin, x))
//    cout << x;
  string a, b;
  cin >> a >> b;
  if (a == b) {
    cout << "a = b" << endl;
  }
  if (a > b) {
    cout << "a > b" << endl;
  }
  if (a < b) {
    cout << "a < b" << endl;
  }
  string c, d;
  cin >> c >> d;
  cout << c + d << endl;
  cout << c + " " + d << endl;
  return 0;
}
