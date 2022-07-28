#include <bits/stdc++.h>
using namespace std;
void print_V(vector<pair<int, int>> v) {
  cout << "size : " << v.size() << endl;
  for (int i = 0; i < v.size; i++) {
    cout << v[i].first << " " << v[i].second << " ";
  }
  cout << endl;
}

int main() {
  vector<pair<int, int>> v = {{1, 3}, {4, 6}, {5, 6}};
  v.print_V(v);
}