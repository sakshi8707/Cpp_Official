#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "456789";
  sort(s.begin(), s.end(), lower<int>());
  cout << s << endl;
}