#include <bits/stdc++.h>
using namespace std;

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  vector<int> v;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }
  for (int i = 0; i < n; i++) {
    sort(v.begin(), v.end());
    cout << v[i] << " ";
  }

  return 0;
}
