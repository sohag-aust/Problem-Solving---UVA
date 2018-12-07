#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<ll>v;

void pre()
{
    for(ll i=1;i<=21;i++)
    {
        double val = pow((double)i,(double)3);
        v.push_back((ll)val);
    }
}

int main()
{
    pre();

    ll n,track;

    while(cin>>n)
    {
        ll sz = v.size();
        track = sz;

        ll dp[sz+2][n+2];

        for(ll i=0;i<sz;i++)
        {
            if(v[i]>n)
            {
                track = i;
                break;
            }

            for(ll j=0;j<=n;j++)
            {
                if(i == 0) dp[i][j] = 1;

                else
                {
                    ll i1 = v[i];

                    if(i1>j) dp[i][j] = dp[i-1][j];

                    else
                    {
                        ll top = dp[i-1][j];
                        ll diff = j-i1;
                        dp[i][j] = (top + dp[i][diff]);
                    }
                }
            }
        }

        cout<<dp[track-1][n]<<endl;
    }

    return 0;
}

