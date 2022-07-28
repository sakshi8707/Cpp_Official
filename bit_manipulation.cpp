#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int getbit(int n, int pos) { return ((n & (1 << pos)) != 0); }
// for seting a bits
int setBit(int n, int pos) { return ((n | (1 << pos))); }
// for clearing a bit
int clearBit(int n, int pos) {
  int mask = ~(1 << pos);
  return (mask & n);
}
// for updating a bits
// first we clear a bit and then seting a bit
int updateBit(int n, int pos,int value) {
  int mask = ~(1 << pos);
  int b = (mask & n);
  return (b | (value << pos));
}

int main() {
  cout << getbit(5, 2) << endl;
  cout << setBit(5, 1) << endl;
  cout << clearBit(5, 2) << endl;
  cout << updateBit(5, 1,1) << endl;
  return 0;
}