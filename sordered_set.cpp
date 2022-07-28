#include <bits/stdc++.h>
using namespace std;

int main() {
  unordered_set<string> s;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string str;
    cin >> str;
    s.insert(str);
  }
  /* for (auto sr : s) {
    cout << sr << endl;
  }
  */
  int q;
  cin >> q;
  while (q--) {
    string str;
    cin >> str;
    if (s.find(str) = s.end()) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }

  return 0;
}
