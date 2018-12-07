#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll z,i,m,l;
    int cs = 0;

    while(cin>>z>>i>>m>>l)
    {
        map<int,int>mp;
        int cnt = 0;

        if(!z && !i && !m && !l) break;

        while(true)
        {
            ll mul = (z*l) + i;
            ll mod = mul%m;

            mp[mod]++;

            if(mp[mod]>1) break;
            l = mod;
            cnt++;
        }

        cout<<"Case "<<++cs<<": "<<cnt<<endl;
    }

    return 0;
}

