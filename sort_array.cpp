#include <bits/stdc++.h>
using namespace std;

void Longest_consecutive_no(int arr[],int n)
{
  for (int i = 0; i < n - 1; i++) {
      for (int j = j + i; j < n; j++) {
        if (arr[i] >= arr[j]) {
          int temp = arr[j];
          arr[i] = arr[j];
          arr[j] = temp;
        } else
          continue;
      }
}
  // longest consicutive number
  // int t;
  // cin >> t;
  // while (t--) {
  //  
int main()
{
   int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    
    Longest_consecutive_no(arr,n);
    for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }
  cout << endl;
  return 0;
}
  