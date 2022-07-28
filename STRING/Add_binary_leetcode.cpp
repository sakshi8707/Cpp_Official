#include<bits/stdc++.h>
using namespace std;
// function for binary operation
string AddBinary(string a,string b)
{
string ans;
int i = a.length()-1,j= b.length()-1; // i and j length -1 of
// the string
int carry = 0,sum = 0;
while(i>=0 || j>=0)
{
    // for subtracting first no. with zero ans get's into sum
if(i>=0)
{
    sum += a[i--]-'0';
}
//for subtracting first with zero ans get
if(j>=0)
{
    sum += b[j--]-'0';
}
// if carry is not zero
carry = sum>1?1:0;
ans += to_string(sum%2);
}
if(carry) ans += to_string(carry);
reverse(ans.begin(), ans.end());
return ans;

}
int main()
{
string a,b;
cin>>a >> b;
cout<<AddBinary(a,b);

  return 0;
}