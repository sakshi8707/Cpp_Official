#include <iostream>
#include <utility>
using namespace std;

int main() {
  pair<int, string> pair1;
  pair1.first = 1;
  pair1.second = "sakshi using geeksforgeeks";
  pair<int, string> pair2;
  pair2 = make_pair(5, "anmol is mental");
  pair1.swap(pair2);
  cout << pair1.first << " " << pair1.second << " " << endl;
  cout << pair2.first << " " << pair2.second << " " << endl;
  return 0;
}