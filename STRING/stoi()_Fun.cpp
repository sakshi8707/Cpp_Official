#include<bits/stdc++.h>
using namespace std;
// stoi() : The stoi() function takes a string as an argument and
//  returns its value. Following is a simple implementation:

int main()
{
    string str1 = "45";
    string str2 = "65.8483";
    string str3 = "4.5 sakshi";

    int my1 = stoi(str1);
    int my2 = stoi(str2);
    int my3 = stoi(str3);    

    cout<<"before : "<<str1<<"after :"<<my1<<endl;
    cout<<"before : "<<str2<<"after :"<<my2<<endl;
    cout<<"before : "<<str3<<"after :"<<my3<<endl;

    return 0;
}