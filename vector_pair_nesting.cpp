#include <bits/stdc++.h>
using namespace std;
void printvec(vector<pair<int, int>> p) {
  cout << "size: " << p.size() << endl;
  for (int i = 0; i < p.size(); i++) {
    cout << p[i].first << " " << p[i].second << endl;
  }
}

int main() {
  vector<pair<int, int>> p;
  printvec(p);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    p.push_back({x, y});
  }
  cout << endl;

  return 0;
}