#include <bits/stdc++.h>
using namespace std;

void print_vector(vector<string> v) {
  cout << "size of vector: " << v.size() << endl;
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl;
}

int main() {
  vector<string> v;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    v.push_back(s);
  }
  print_vector(v);
  return 0;
}