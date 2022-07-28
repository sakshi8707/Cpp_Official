#include<bits/stdc++.h>
using namespace std;
 bool Anagram(string str1 , string str2)
 {
     
int i=0,j=0;
if(str1.size()!=str2.size())
{
return false;
}

sort(str1.begin(),str1.end());
sort(str2.begin(),str2.end());

for(int i=0;i<str1.size();i++)
{
   if(str1[i]!=str2[i])
   return false;
   

return true;
   
}
 }

int main()
{
string str1,str2;
cin>>str1>>str2;
// while(i<str1.size() and j<str2.size())
// {
// if(truer1[i]==str2[j])
// {
//     i++;j++;
// }
// else
// cout<<"not anagram"<<endl;
// break;
// cout<<"anagram "<<endl;
// }
if(Anagram(str1,str2))
cout<<"anagram "<<endl;
else
cout<<"not anagram"<<endl;
 return 0;
}