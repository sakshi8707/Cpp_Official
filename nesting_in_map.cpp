#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
  map<pair<int, int>, int> m;
  pair<int, int> p1, p2;
  p1 = {1, 2};
  p2 = {2, 3};
  cout << (p1 <p2); // it compares the first element to the second element of pair

  map<set<int>, int> m;
  set<int> s1, s2;
  s1.insert(4);
  s2.insert(5);
  cout << (s1 < s2) << endl;

  return 0;
}