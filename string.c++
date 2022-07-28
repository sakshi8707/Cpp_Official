#include <iostream>
using namespace std;

int main() {
  // for comparing tow string
  string s1 = "sakshi";
  string s2 = "sakshi";
  cout << s2.compare(s1) << " " << endl;
  // for equality of two string in comparison
  if (!s1.compare(s2)) {
    cout << " strings are equal" << endl;
  }
  // for empty string and clear function
  s1.clear();
  if (s1.empty()) {
    cout << "string is empty: " << endl;
  }
  // for deletion of strings
  string s3 = "abcdefgh";
  s3.erase(3, 4);
  cout << s3 << endl;
  // for fiding an element in the strign function
  cout << s3.find("abc") << endl;
  // for insert
  cout << s2.insert(5, "tiwari") << endl;
  // SUBSTIRNG
  /*string s = s1.substr(1, 2);
  cout << s << endl;*/
  // STIRNG TO Integer
  string s4 = "400";
  int x = stoi(s4);
  cout << (x + 2) << endl;
  // apeend a string with
  int p = 70;
  cout << to_string(p) + "3" << endl;
  return 0;
}