#include<bits/stdc++.h>
using namespace std;

// void BalancedBracket(string br)
// {
//     stack<char> st; 
//     char x;

//     for(int i = 0; i <br.size();i++)
//     {
//         if(br[i]=='(' || br[i]=='{' || br[i]=='[')
//         {
//             st.emplace(br[i]);
//             continue;
//         }
//         if(st.empty())
//         {
//             cout<<"NO"<<endl;
//         }
//         else
//         {
//             // switch case for
//             switch(br[i])
//             {
//                 case (')'): 
//                 x = st.top(); 
//                 st.pop();
//                 if(br[i]=='}' || br[i]==']')
//                 {
//                     cout<<"NO"<<endl;
//                 }
//             break;
//                case ('}'): 
//                x = st.top();
//                st.pop();
//                if(br[i]==')' || br[i]== ']')
//                {
//                       cout<<"NO"<<endl;
//                }
//                break;
//                case (']'): 
//                x = st.top();
//                st.pop();
//                if(br[i]=='}' || br[i]== ')')
//                {
//                       cout<<"NO"<<endl;
//                }
//                break;
//             }

//         }
//     }
//     if(st.empty())
//     {
//            cout<<"Yes"<<endl;
//     }
//     else
//     {
//            cout<<"NO"<<endl;
//     }
// }
//  USING UNORDERED MAP  METHOD---------->next
void BalancedBracket(string br)
{ 
    unordered_map<char,int> m = {{'(',-1},{'{',-2},{'[',-3}};
    stack<char> st;
    for(char i : br)
    {
         if(m[i]<0)
         {
             st.push(m[i]);
         }
         else
         {
             if(st.empty())
             {
                 cout<<"NO"<<endl;
             }
             char x = st.top();
             st.pop();
             if(m[x]+m[i]!=0)
             {
                 cout<<"NO"<<endl;
             }
         }
    }
    if(st.empty())
    {
        cout<<"YEs"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
} 
int main()
{
string bracket;
cin>>bracket;

BalancedBracket(bracket);

  return 0;
}