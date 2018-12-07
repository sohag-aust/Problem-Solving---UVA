#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    vector<ll>div;
    int test;
    cin>>test;

    while(test--)
    {
        ll a,b,k;
        cin>>a>>b>>k;
        ll sum,sum1;
        sum=sum1=0;

        for(int i=a; i<=b; i++)
        {
            if(i%k==0)
            {
                div.clear();

                int n=i;

                for(int j=1; j<=sqrt(n); j++)
                {
                    if(n%j==0)
                    {
                        sum+=j;
                        div.push_back(j);

                        if(j!=sqrt(n))
                        {
                            sum+=n/j;
                            div.push_back(n/j);
                        }
                    }
                }

                int si=div.size();
                sum1+=si;
            }
        }

        cout<<sum1<<" "<<sum<<endl;
    }

    return 0;
}

