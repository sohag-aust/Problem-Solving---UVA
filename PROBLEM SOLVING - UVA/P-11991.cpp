#include<bits/stdc++.h>
using namespace std;

#define maxi 1000099

typedef long long ll;

ll ara[maxi];
vector<ll>v[maxi];

int main()
{
    ll n,m;

    while(cin>>n>>m)
    {
        vector<ll>ans;

        for(ll i=0;i<n;i++)
        {
            cin>>ara[i];
            v[ara[i]].push_back(i+1);
        }

        while(m--)
        {
            ll a,b;
            cin>>a>>b;

            ll sz = v[b].size();

            if(a>sz) ans.push_back(0);
            else
            {
                a--;
                ans.push_back(v[b][a]);
            }
        }

        for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<endl;

        for(int i=0;i<=n;i++)
            v[i].clear();
    }

    return 0;
}

