#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main () {
  vector<int> x;
  int n;
  while (cin >> n) {
    x.push_back(n);
  }
  int result, m = 0;
  while (m < x.size()) {
    if (m <= x.size() - 2) {
      result = x[m] + x[m+1];
      cout << x[m] << " + " << x[m+1] <<  " = " << result << endl;
      m = m + 2;
    }
    else {
      cout << "The last number " << x[m] << " has no pairs." << endl;
      m++;
    }
  }
  m = 0;
  int m_prev1, m_prev2;
  while (m <= x.size()/2) {
    if (x[m] != x[x.size()-m-1]) {
      result = x[m] + x[x.size()-m-1];
      cout << x[m] << " + " << x[x.size()-m-1] <<  " = " << result << endl;
      m_prev1 = m;
      m_prev2 = x.size()-m-1;
      m = m + 1;
    }
    else {
      cout << "The middle number " << x[m] << " has no pairs." << endl;
      m++;
    }
    if (m == m_prev1 || m == m_prev2) {
      m++;
    }
  }
  return 0;
}
