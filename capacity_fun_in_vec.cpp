#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v;
  for (int i = 0; i <= 6; i++) {
    v.push_back(i);
  }
  cout << "size : " << v.size() << endl;
  cout << "maximum size : " << v.max_size() << endl;
  cout << "capacity: " << v.capacity() << endl;
  v.resize(5);
  cout << "size : " << v.size() << endl;
  v.empty();
  if (v.empty() == false) {
    cout << "vector is not empty";
  } else {
    cout << "empty()" << endl;
  }
  v.shrink_to_fit();
  cout << "vector elements are: ";
  for (auto it = v.begin(); it != v.end(); it++) {
    cout << *it << " " << endl;
  }
  return 0;
}