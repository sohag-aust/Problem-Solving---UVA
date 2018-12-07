#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll n,m,val,cnt;
    map<ll,ll>mp;

    while(cin>>n>>m)
    {
        cnt=0;

        if(!n && !m)
            break;

        for(int i=0; i<n; i++)
        {
            cin>>val;
            mp[val]=1;
        }

        for(int j=0; j<m; j++)
        {
            cin>>val;

            if(mp[val])
                cnt++;
        }

        cout<<cnt<<endl;

        mp.clear();
    }

    return 0;
}


