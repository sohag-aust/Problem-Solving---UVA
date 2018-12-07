#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int maxi = 10;
ll ara[maxi];
ll n,lcm;

ll find_gcd(ll a,ll b)
{
    if(b == 0) return a;
    return find_gcd(b,a%b);
}

ll find_lcm()
{
    lcm = ara[0];

    for(int i=1;i<n;i++)
    {
        lcm = (lcm * ara[i]) / find_gcd(lcm,ara[i]);
    }

    return lcm;
}

int main()
{
    int cs = 0,test;
    cin>>test;

    while(test--)
    {
        memset(ara,0,sizeof(ara));
        lcm = 0;

        cin>>n;

        for(int i=0;i<n;i++) cin>>ara[i];

        ll ans = find_lcm();

        ll upore = 0;

        for(int i=0;i<n;i++)
            upore += ans/ara[i];

        ll gcd = find_gcd(ans*n,upore);

        cout<<"Case "<<++cs<<": "<<(ans*n)/gcd<<"/"<<(upore/gcd)<<endl;
    }

    return 0;
}

