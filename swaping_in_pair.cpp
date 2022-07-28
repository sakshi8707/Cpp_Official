#include <bits/stdc++.h>
using namespace std;

int main() {
  pair<int, char> p1;
  p1 = make_pair(1, 's');
  pair<int, char> p2;
  p2 = make_pair(2, 'k');

  cout << "-----BEFORE SWAPING-----" << endl;
  cout << "\n content of pair 1\n";
  cout << p1.first << " " << p1.second << " ";
  cout << "\n content of pair 2\n";
  cout << p2.first << " " << p2.second << " " << endl;
  p1.swap(p2);

  cout << "-----AFTER SWAPING-----" << endl;
  cout << "\n content  of pair 1\n";
  cout << p1.first << " " << p1.second << " ";
  cout << "\n content of pair 2\n";
  cout << p2.first << " " << p2.second << " " << endl;

  return 0;
}