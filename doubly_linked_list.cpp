#include<bits/stdc++.h>
using namespace std;
//DESING A HASHSET(UNORDERED SET) IN STL
class MyHashset
{
vector<int> m;
int size;
MyHashset()     
{
    size= 1e6; // 10^6 given in   question
    m.resize(size);
}
void add(int key){
    m[key] = 1;
}
void remove(int key){
    m[key] = 0;
}
bool void contains(int key){
    return m[key];
}

};

int mainI()
{
    // Design a Hashset
 
    return 0;
}