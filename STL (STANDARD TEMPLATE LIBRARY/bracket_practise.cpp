#include<bits/stdc++.h>
using namespace std;

int main()
{
   string br;
   cin>>br; 
   stack<char> s;
   string x;
   
   for(int i=0; i<br.size();i++)
   {
       if(br[i]=='{' || br[i]=='[' || br[i]=='(')
       {
           s.push(br[i]);
           continue;
       }
       
   if(s.empty())
   {
cout<<"NO"<<endl;
   }
switch(br[i])
{
    case ']' :
    x=s.top();
    s.pop();
    if(br[i]=='}' || br[i]==')')
    cout<<"NO"<<endl;
break;

    case ')' :
    x=s.top();
    s.pop();
    if(br[i]=='}' || br[i]==']')
    cout<<"NO"<<endl;
break;

    case '}' :
    x=s.top();
    s.pop();
    if(br[i]==']' || br[i]==')')
    cout<<"NO"<<endl;
break;

}
   }
if(s.empty())
{
    cout<<"Yes"<<endl;
}
   return 0;
}