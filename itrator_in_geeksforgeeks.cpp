#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> g;
  for (int i = 0; i <= 10; i++) {
    g.push_back(i);
  }
  for (auto i = g.begin(); i != g.end(); ++i) {
    cout << (*i) << " ";
  }
  for (auto ir = g.rbegin(); ir != g.rend(); ++ir) {
    cout << *ir << " ";
  }
  for (auto ir = g.crbegin(); ir != g.crend(); ++ir) {
    cout << *ir << " ";
  }
  for (auto i = g.cbegin(); i != g.cend(); ++i) {
    cout << *ir << " ";
  }

  return 0;
}