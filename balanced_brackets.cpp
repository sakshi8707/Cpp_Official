#include<bits/stdc++.h>
using namespace std;
// function to perform 





void BalancedBracket(string bracket)
{
    stack<char> s; 
    char x;
     
    for(int i=1;i<bracket.length();i++)
    {
      if(bracket[i]=='[' || bracket[i]=='(' || bracket[i]=='{')
      {
          s.emplace(bracket[i]);
          continue;
      }
      if(s.empty())
      {
      cout<<"NO"<<endl;
      }
      else
      switch(bracket[i])
    {
        case(')'):
        x = s.top();
        s.pop();
        if(bracket[i]==']' || bracket[i] == '}')
        {
            cout<<"NO"<<endl;
        }
        break;
       
        case('}'):
        x=s.top();
        s.pop();
        if(bracket[i]==']' || bracket[i] == ')')
        {
            cout<<"NO"<<endl;
        }
        break;
    
    
        case(']'):
        x=s.top();
        s.pop();
        if(bracket[i]==')' || bracket[i] == '}')
        {
            cout<<"NO"<<endl;
        }
        break;
    }
    }
   
}


int main()
{ string c;
cin>>c;
BalancedBracket(c);

    return 0;  
}