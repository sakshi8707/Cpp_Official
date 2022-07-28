#include<bits/stdc++.h>
using namespace std;

bool isBalacedBracket(string br)
{
    stack<char> s;
    char x;
 // traversing the string
 for(int i=0;i<br.size();i++)
 {
     if(br[i]=='(' || br[i]=='{' || br[i]=='[' )
     {
         s.push(br[i]);
         continue; // brakets are open then push
     }

     if(s.empty())
     {
         return false;     
     }
     switch(br[i])
     {
         case ')': // case 1 for ) this type of brackets
         x = s.top();
         s.pop();
         if(br[i] == '}'|| br[i] == ']')
         return false;
    break;
         case ']': // case 2 for ] this type of closing brackets
         x = s.top();
         s.pop();
         if(br[i] == '}'|| br[i] == ')')
         return false;
   break;
         
         case '}': // case 3 for } thise type of closing brackets
         x = s.top();
         s.pop();
         if(br[i] == ')'|| br[i] == ']')
         return false;
   break;
     }
 }
 return (s.empty());
}

// for function callings
int main()
{
    string k;
    cin>>k;
    if(isBalacedBracket(k))
    {
        cout<<"Balanced brackets";
    }
    else
    {
        cout<<"Not balaced brackets";
    }
    return 0;
}