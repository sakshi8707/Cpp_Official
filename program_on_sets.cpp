#include <bits/stdc++.h>
using namespace std;
// PRINT UNIQUE STRING PROGRAM
int main() {
  set<string> s;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string str;
    cin >> str;
    s.insert(str);
  }
  for (auto v : s) {
    cout << v << " ";
  }

  return 0;
}
