#include<bits/stdc++.h>
using namespace std;

#define maxi 10000000

typedef long long ll;

unordered_map<ll,pair<ll,ll> >mp;

void init()
{
    int i;
    ll sum;

    ll s_point,e_point;

    s_point = e_point = 0;

    for(i=1; i <= 5000; i++)
    {
        sum = (i*(i+1))/2;

        s_point = (sum-i) + 1;
        e_point = sum;

        mp[i] = make_pair(s_point,e_point);

        if(sum >= maxi) break;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    init();

    ll n;

    while(cin>>n)
    {
        int i;
        ll _start,_end;

        for(i=1; i<=5000 ; i++)
        {
            _start = mp[i].first;
            _end = mp[i].second;

            if(n>=_start && n<=_end) break;
        }

        int count_inc = 1;
        int count_dec = i;

        for(int j = _start ; j<=_end ; j++)
        {
            if(j == n) break;

            count_inc++;
            count_dec--;
        }

        cout<<"TERM "<<n<<" IS ";

        if(i&1)
            cout<<count_dec<<"/"<<count_inc;

        else
            cout<<count_inc<<"/"<<count_dec;

        cout<<endl;
    }

    return 0;
}

