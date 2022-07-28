#include<bits/stdc++.h>
using namespace std;
long long brr[200002];
long long brr1[200002];
int b1 = 0;
int b2 = 0;
void forbrr(int x, int y)
{
        brr[b1]=x;
        b1++;
        brr[b1] = y;
        b1++;
}

void forbrr2(int x, int y)
{
        brr1[b2]=x;
        b2++;
        brr1[b2] = y;
        b2++;
}

int main()
{
 int t;cin>>t; //
 while(t--)
 {
     b1=0;
     b2=0;
     int count1=0;
     int count2=0;
     int n;cin>>n;
     vector<int> v(n);
     for(int i = 0; i < n;i++)
     {
         int x;cin>>x;
         v.push_back(x);
     }
     //----main method----
     if(v[0]%2==0)
     {
         if(v[1]%2==0)
         {
             for(int i = 0; i < n; i++)
             {
                 if(v[i]%2==1)
                 {
                     Yrr = v[i];
                     yrr = i;
                     oddcheck = 1;

                     v[1] = v[1]^Yrr;
                     count1++;
                     forbrr(1,yrr);
                     break;
                 }
             }
         }
         else
         {
             Yrr = v[1];
             yrr=1;
             oddcheck = 1;
         }
         YY = v[1];
         yy = 1;
         for(int i=2;i<n;i++)
         {
             if(v[i]%2==1)
             {
                 v[i] = v[i]^YY;
                 count1++;
                 forbrr(i,yy);
             }
             i++;
             if(i<n)
             {
                 if(v[i]%2==0)
                 {
                      v[i] = v[i]^YY;
                      count1++;
                      forbrr(i,yy);
                 }
             }
         }
         V[0] = V[0]^Y11;
         count2++;
         forbrr2(0,y11);

         YY = V[0];
         yy = 0;
         
     }

 }

  return 0;
}