#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// print the student and its marks (marks in decresing order) when no is same
// then print the name in lexographical order sample input: 3 Eve 78 , Bob 99
// ,Alice 78
//  sample output : Alice 78,Eve 78 , Bob 99

int main() {
  map<int, multiset<string>> list_st;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int marks;
    string name;
    cin >> name >> marks;
    list_st[marks].insert(name);
  }
  /*auto current_it = --list_st.end();
  while (true) {
// another way is we multiply no with -ve and the print so basically it print
-ve bigger no first bcz it small in the form of -ve
*/
//OTHER PART OF CODE 
/*
  auto &student_name = (*current_it).second;
  int marks = (*current_it).first;
  for (auto name : student_name) {
    cout << name << " " << marks << " " << endl;
  }
  if (current_it == list_st.begin())
    break;
  current_it--;
}*/
return 0;
}