#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n,l;
    ll cs = 0;

    while(cin>>n>>l)
    {
        if(n<0 && l<0) break;

        ll cnt(0);
        ll temp = n;

        while(true)
        {
            if(n==1) break;

            if(n>l)
            {
                cnt--;
                break;
            }

            if(n%2 == 0)
                n/=2;

            else
                n = (3*n)+1;

            cnt++;
        }

        cout<<"Case "<<++cs<<": A = "<<temp<<", limit = "<<l<<", number of terms = ";

        cout<<cnt+1<<endl;
    }

    return 0;
}

