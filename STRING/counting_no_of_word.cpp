#include<bits/stdc++.h>
using namespace std;


int main()
{
string str = " don't give up on your passion";
stringstream s(str);
string word;
int count = 0;
while(s>>word)
{
    count++;
}
cout<<"no of count is :"<<count<<endl;

    return 0;
}