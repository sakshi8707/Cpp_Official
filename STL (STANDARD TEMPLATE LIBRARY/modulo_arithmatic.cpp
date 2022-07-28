#include<bits/stdc++.h>
using namespace std;
// modulo arithmatic
// given a number . pritn its factorial 
//constraints
//1<=N<=100
//for mudulo 
int main(){
int n;
cin>>n;
 long long fact = 1;
for(int i=0;i<n;i++){
    fact = fact*i;//when we take input 22 its give -ve value thats why we use modulo
}
cout<<fact<<endl;
    return 0;
}