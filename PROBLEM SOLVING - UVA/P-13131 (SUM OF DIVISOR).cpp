#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        ll n,k;
        cin>>n>>k;
        ll sum=0;

        for(int i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                if(i%k!=0)
                    sum+=i;

                if(i!=sqrt(n))
                {
                    if((n/i)%k!=0)
                        sum+=n/i;
                }
            }
        }

        cout<<sum<<endl;
    }

    return 0;
}


