#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int Ddsa,Dtoc,Ddm;
	    cin>>Ddsa>>Dtoc>>Ddm;
	    int Sdsa,Stoc,Sdm;
	    cin>>Sdsa>>Stoc>>Sdm;
	    // if total of 
	    int totalD = Ddsa+Dtoc+Ddm;
         int totalS = Sdsa+Stoc+Sdm;
         // first condition
         if(totalD>totalS)
         {
            cout<<"Dragon"<<endl; 
         }
         else if(totalD<totalS)
         {
             cout<<"SLOTH"<<endl;
         }
         //second condtion when both's no are same
          else if(totalD==totalS)
         {
            if(Ddsa>Sdsa)
            {
                cout<<"Dragon"<<endl;
            }
            else if(Ddsa<Sdsa)
            {
                cout<<"SLOTH"<<endl;
            }
            else if(Ddsa == Sdsa)
            {
                if(Dtoc>Stoc)
               {
                    cout<<"Dragon"<<endl;
                }
                else if(Dtoc<Stoc)
                {
                    cout<<"SLOTH"<<endl;
                }
                else if(Dtoc==Stoc)
                {
                    if(Ddm>Sdm)
                  {
                      cout<<"Dragon"<<endl;
                  }
                  else if(Ddm<Sdm)
                  {
                      cout<<"SLOTH"<<endl;
                  }
                  else if(Ddm==Sdm)
                  {
                      cout<<"Tie"<<endl;
                  }
                }
            }
            
         }
         
	    
	    
	}
	return 0;
}
