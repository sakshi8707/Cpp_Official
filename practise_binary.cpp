#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key) {
  int s = 0;
  int e = n;

  int mid = (s + e) / 2;
  while (s < e) {
    if (arr[mid] < key) {
      arr[mid] = s + 1;
    } else if (arr[mid] == key) {
      return mid;
    } else {
      arr[mid] = e - 1;
    }
  }
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int key;
  cin >> key;
  cout << binarySearch(arr, n, key) << endl;

  return 0;
}