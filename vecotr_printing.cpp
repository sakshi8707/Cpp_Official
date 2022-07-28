#include <bits/stdc++.h>
using namespace std;
void print_vecotor(vector<int> v) {
  cout << "size of vector: " << v.size() << endl;
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl;
}

int main() {
  vector<int> v(1); // for printing 10 times as 34
  /* int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    print_vecotor(v);

    v.push_back(x); // print after the value
  }*/
  print_vecotor(v);
  vector<int> &v1 = v;
  v.push_back(5);
  v1.push_back(6);
  print_vecotor(v);
  print_vecotor(v1);

  return 0;
}