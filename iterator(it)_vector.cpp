#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v = {1, 3, 5, 6};
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl;

  vector<pair<int, int>> v_p = {{3, 44}, {5, 3}, {88, 34}};
  vector<pair<int, int>>::iterator it;
  for (it = v_p.begin(); it != v_p.end(); it++) {
    cout << (*it).first << " " << (*it).second << endl;
  }
  return 0;
}