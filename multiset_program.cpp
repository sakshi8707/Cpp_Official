#include <bits/stdc++.h>
using namespace std;
void print(multiset<string> m) {
  for (string s : m) {
    cout << s << " " << endl;
  }
}
int main() {
  multiset<string> m;
  m.insert("sakshi");
  m.insert("tiwari");
  m.insert("jayprakash");
  // erase function ---in this method it deletes repting term
  auto it = m.find("jayprakash");
  if (it != m.end()) {
    m.erase(it); // when we use only this it erase all under we declared
  }
  print(m);
  return 0;
}