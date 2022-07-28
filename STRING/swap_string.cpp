#include<bits/stdc++.h>
using namespace std;   

int main()
{
string str1,str2;
getline(cin,str1);
getline(cin,str2);
cout<<"BEFORE->"<<endl;
cout<<"string 1 is :" <<" "<<str1<<","<<"string 2 is : "<<str2<<" "<<endl;
swap(str2,str1);
cout<<"AFTER->"<<endl;
cout<<"string 1 is :" <<" "<<str1<<","<<"string 2 is : "<<str2<<" "<<endl;

    return 0;   

}