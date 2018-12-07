
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,flag,res,res1,flag1;

    while(cin>>n)
    {
        flag=1;
        flag1=1;
        if(n==0)
            break;
        for(int i=3; i<=n; i+=2)
        {
            res=n-i;

            for(int j=2; j<=sqrt(res); j++)
            {
                res1=res%j;

                if(res1==0)
                {
                    flag=0;
                    break;
                }
                else
                    flag=1;
            }

            for(int k=2; k<=sqrt(i); k++)
            {
                if(i%k==0)
                {
                    flag1=0;
                    break;
                }
                else
                    flag1=1;
            }

            if(flag==1&& flag1==1)
            {
                if(res%2!=0 && i%2!=0)
                {
                    if(res+i==n)
                    {
                        cout<<n<<" = "<<i<<" + "<<res<<endl;
                        break;
                    }
                    //else
                    //cout<<"Goldbach's conjecture is wrong."<<endl;
                }
            }
        }
    }
    return 0;
}
