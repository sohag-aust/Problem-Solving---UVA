#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz 31

int main()
{
    ll n;

    while(cin>>n && n)
    {
        bitset<sz>a,b;
        int cnt = 0;
        int index = -1;

        while(n > 0)
        {
            index++;
            int mod = n%2;
            if(mod)
            {
                cnt++;
                if(cnt & 1) a.set(index);
                else b.set(index);
            }
            n /= 2;
        }

        cout<<a.to_ulong()<<" "<<b.to_ulong()<<endl;
    }

    return 0;
}

