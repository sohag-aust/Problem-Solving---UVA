#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll cnt=0;

ll init(ll i)
{
    if(i==1) return ++cnt;
    else if(i%2==0)
    {
        i=i/2;
        cnt++;
        init(i);
    }

    else
    {
        i=(3*i)+1;
        cnt++;
        init(i);
    }
}

int main()
{
    ll a,b,maxi=0;
    while(cin>>a>>b)
    {
        maxi=0;
        ll mx=max(a,b);
        ll mn=min(a,b);
        cnt=0;
        for(ll i=mn; i<=mx; i++)
        {
            cnt=0;
            ll res=init(i);

            if(res>maxi)
                maxi=res;
        }

        cout<<a<<" "<<b<<" "<<maxi<<endl;
    }

    return 0;
}
