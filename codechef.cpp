#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x, y;
    cin >> x, y;
    string str;
    cin >> str;
    long long countofone = 0;
    long long maximumday = 0;
    long long a = 0;

    for (int i = 0; i < 30; i++) {
      if (str[i] == '1') {
        a = a + x;
        countofone++;
      } else {
        maximumday = max(countofone, maximumday);
        countofone = 0;
      }
    }
    maximumday = max(countofone, maximumday);

    a = maximumday * y;
    cout << a << endl;
  }
