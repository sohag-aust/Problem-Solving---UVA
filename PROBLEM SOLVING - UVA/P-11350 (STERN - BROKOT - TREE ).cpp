#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);

    int test;
    cin>>test;

    while(test--)
    {
        pair<ll,ll>l,r,k,p;

        r = {1,0};
        l = {0,1};
        k = {1,1};

        string str;
        cin>>str;

        for(auto i : str)
        {
            if(i == 'R')
            {
                p = {(k.first+r.first),(k.second+r.second)};
                l = k;
                k = p;
            }

            else
            {
                p = {(k.first+l.first),(k.second+l.second)};
                r = k;
                k = p;
            }
        }

        cout<<p.first<<"/"<<p.second<<endl;
    }

    return 0;
}

