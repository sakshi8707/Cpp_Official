#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string str = " abcdefghijklmnopqrst";
  for (int i = 0; i < str.size(); i++) {
    if (str[i] >= 'a' && str[i] <= 'z') {
      str[i] -= 32;
    }
  }
  cout << str;
  // LOWER TO UPPERCASE Character
  for (int i = 0; i < str.size(); i++) {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      str[i] += 32;
    }
  }
  cout << str << endl;
  sort(str.begin(), str.end());

  cout << str << endl;
  // TRANSFORM FUNCTIONS
  string s = " sakshitiwari";
  transform(s.begin(), s.end(), s.begin(), ::toupper);
  cout << s << endl;

  transform(s.begin(), s.end(), s.begin(), ::tolower);
  cout << s << endl;
  return 0;
}