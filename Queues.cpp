#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
  queue<string> q;
  q.push("sakshi");
  q.push("deepak");
  q.push("anmol");
  q.push("shilpa");
  while (!q.empty()) {
    cout << q.front() << endl;
    q.pop();
    }
  return 0;
}