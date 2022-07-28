#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s1 = "abedghdjei";
  sort(s1.begin(), s1.end());
  cout << s1 << endl;

  return 0;
}