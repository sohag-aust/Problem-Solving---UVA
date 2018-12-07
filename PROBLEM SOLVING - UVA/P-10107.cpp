#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n;
    vector<ll>v;

    while(cin>>n)
    {
        v.push_back(n);
        sort(v.begin(),v.end());

        int sz = v.size();

        if(sz%2 == 0)
        {
            ll mid = sz/2;
            ll avrg = (v[mid-1]+v[mid])/2;
            cout<<avrg;
        }

        else
        {
            ll mid = sz/2;
            cout<<v[mid];
        }

        cout<<endl;
    }

    return 0;
}
