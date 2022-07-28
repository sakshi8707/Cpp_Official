
#include <bits/stdc++.h>
using namespace std;
int main() {
  map<pair<string, string>, vector<int>> m;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string fn, ln;
    int c;
    cin >> fn >> ln >> c;
    for (int j = 0; j < c; j++) {
      int x;
      cin >> x;
      m[{fn, ln}].push_back(x);
    }
  }
  for (auto &pr : m) {
    auto &first_name = pr.first;
    auto &list = pr.second;
    cout << first_name.first << " " << first_name.second << " " << endl;
    cout << list.size() << endl;
    for (auto &x : list) {
      cout << x << " ";
    }
  }
  cout << endl;
  return 0;
}