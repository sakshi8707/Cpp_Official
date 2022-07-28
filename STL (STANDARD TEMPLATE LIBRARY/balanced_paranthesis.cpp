#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'isBalanced' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */
{

unorderd_map<char, int> symbol = {{'{',-1},{'[',-2},{'(',-3},{'}',1}{']',2}{')',3}};
string isBalanced(string s) {
    stack<char> st;
    for(char bracket : s)
    {
        if(symbol[bracket]<0)
        {
            st.push(bracket);
        }
        else
        {
        if(st.empty()) 
        {
             return "NO";
        }
        else
        {
            char top = st.top();
            st.pop();
        }
        if(symbol[top]+symbol[bracket]!=0)
        {
            return "NO";
        }
        }
        
    }
    if(st.empty())
    {
        return "Yes";
    }
    else
    {
        return "NO";
    }
}

    int main()
    {
     int t;
     cin>>t;
        while(t--)
        {
            string s;
            cin>>s;
            cout<<isBalanced(s)<<endl;
        }

        return 0;
    }
    
