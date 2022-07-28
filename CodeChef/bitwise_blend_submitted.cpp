        #include<bits/stdc++.h>
        using namespace std;

        long long cc1[200002];
        long long cc2[200002];
        long long CC1 = 0, CC2 = 0;

        void fun1(long long x,long long y)
        {
           cc1[CC1] = x;
            CC1++;
            cc1[CC1] = y;
            CC1++;
        }
        void fun2(long long x,long long y)
        {
            cc2[CC2] = x;
            CC2++;
            cc2[CC2] = y;
            CC2++;
        }
        int main()
        {
        long long t;cin>>t;
        while(t--)
        {
            CC1=0,CC2=0;
            long long counting1 = 0,counting2 = 0;
            long long n;cin>>n;
            long long arr[n],Arr[n];
            long long Y1=0,Y=2;
            long long y1=0,y=0;
            long long oddcheck = 0;
            for(long long i=0;i<n;i++)
            {
                cin>>arr[i];
                Arr[i] = arr[i];
            }
            //after input-----------
            if(arr[0]%2 == 0)
            {
                if(arr[1]%2==0)
                {
                    for(long long i=2;i<n;i++)  
                    {
                        if(arr[i]%2==1)
                        {
                            Y1 = arr[i];
                            y1 = i;
                            oddcheck = 1;

                            arr[1] = arr[1]^Y1;
                            counting1++;
                            fun1(1,y1);
                            break;
                        }
                    }
                }
                else
                {
                    Y1 = arr[1];
                    y1 =1;
                    oddcheck = 1;
                }

                Y = arr[1];
                y = 1;
                for(long long i=2;i<n;i++)
                {
                    if(arr[i]%2==1)
                    {
                        arr[i] = arr[i]^Y;
                        counting1++;
                        fun1(i,y);
                    }
                i++;
                if(i<n)
                {
                    if(arr[i]%2==0)
                    {
                        arr[i]  = arr[i]^Y;
                        counting1++;
                        fun1(i,y);
                    }
                }

            }
            
            Arr[0] = Arr[0]^Y1;
            counting2++;
            fun2(0,y1);

            Y = Arr[0];
            y = 0;           // line no 93

            for(long long i=1;i<n;i++)
            {
                    if(Arr[i]%2==1)
                    {
                        Arr[i]=Arr[i]^Y;
                        counting2++;
                        fun2(i,y);
                    }          // line no 99
                    i++;
                    if(i<n)
                    {
                        if(Arr[i]%2==0)
                        {
                            Arr[i]=Arr[i]^Y;
                            counting2++;
                            fun2(i,y);
                        }
                    }
            }                        // line 108
        }
        else             //112
        {
            oddcheck = 1;
            Y = Arr[0];
            y = 0;
            for(long long i=1;i<n;i++)
            {
                if(arr[i]%2==1)
                {
                    arr[i] = arr[i]^Y;
                    counting1++;
                    fun1(i,y);
                }
                i++;
                if(arr[i]%2==0 && i<n)
                {
                    arr[i] = arr[i]^Y;
                    counting1++;        //125
                    fun1(i,y);
                }
            }
            Y = Arr[0];
            y=0;

            for(long long i=1;i<n;i++)     //133
            {
                if(Arr[i]%2==0)
                {
                        Arr[i] = Arr[i]^Y;
                        counting2++;
                        fun2(i,y);
                }
                i++;
                if(Arr[i]%2==1 && i<n)               //140
                {
                    Arr[i] = Arr[i]^Y;
                    counting2++; //
                    fun2(i,y);
                }
            }
            Arr[0] = Arr[0]^Arr[1];
            counting2++;
            fun2(0,1);
        }
            if(oddcheck==0)
            {
                cout<<"-1"<<endl;
            }                      //154
            else if(counting1>counting2)
            {
                long long jth;
                cout<<counting2<<endl;
                for(long long i=0;i<counting2;i++)
                {
                    jth  = i*2;
                    cout<<cc2[jth]+1<<" "<<cc2[jth+1]+1<<endl;
                }
            }
            else
            {
                int jth;
                cout<<counting1<<endl;
                for(long long i=0;i<counting1;i++)
                {
                    jth  = i*2;
                    cout<<cc1[jth]+1<<" "<<cc1[jth+1]+1<<endl;
                }
            }
        }
        


        return 0;
        }