#include <bits/stdc++.h>
using namespace std;
int main() {
  pair<int, int> c = {1, 44};
  int a, b;
  tie(a, b) = c;
  cout << a << " " << b << " " << endl;
  pair<int, int> d = {43, 53};
  tie(a, ignore) = d;// FOR REPLACING OTHER ARGS (ARGUMENT) LIKE TUPLES
  cout << a << " " << b << " " << endl;
  pair<int, pair<int, int>> p1 = {5, {66, 66}};
  int x, y, z;
  x = p1.first;
  tie(y, z) = p1.second;
  cout << x << " " << y << " " << z << " " << endl;
  return 0;
}