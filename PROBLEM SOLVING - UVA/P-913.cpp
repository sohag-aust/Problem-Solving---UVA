
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n;

    while(scanf("%lld",&n)!=EOF)
    {
        if(n == 1) cout<<n;

        else
        {
            n = n + (((n+1)/2) * (n-1));
            cout<<n+(n-2)+(n-4);
        }

        cout<<endl;
    }

    return 0;
}
