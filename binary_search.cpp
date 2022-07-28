#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key) {

  int s = 0;
  int e = n;

  while (s <= e) {
    int mid = (s + e) / 2;
    if (arr[mid] == key) {
      return mid;
    } else if (arr[mid] < key) {
      arr[mid] = e - 1;

    } else {
      arr[mid] = s + 1;
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