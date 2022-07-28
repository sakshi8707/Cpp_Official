
#include <bits/stdc++.h>
using namespace std;
main() {
  map<int, multiset<string>> list_st;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int marks;
    string name;
    cin >> name >> marks;
    list_st[-1 * marks].insert(name);
  }
  /*auto current_it = --list_st.end();
  while (true) {
// another way is we multiply no with -ve and the print so basically it print
-ve bigger no first bcz it small in the form of -ve
*/
  for (auto &student_marks_pr : list_st) {
    auto &student_name = student_marks_pr.second;
    int marks = student_marks_pr.first;
    for (auto name : student_name) {
      cout << name << " " << -1 * marks << " " << endl;
    }
  }
  return 0;
}