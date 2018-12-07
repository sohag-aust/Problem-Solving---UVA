#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n,s,sum;

    while(cin>>n>>s)
    {
        list<ll>l;
        list<ll>ans;
        sum = 0;

        ll mini = 1e9;
        int flag = 0;

        for(int i=0; i<n; i++)
        {
            ll num;
            cin>>num;
            l.push_back(num);
        }

        for(int i=0; i<n; i++)
        {
            ll val = l.front();
            l.pop_front();

            if(sum<s)
            {
                sum+=val;
                ans.push_back(val);
            }

            if(sum>=s)
            {
                flag = 1;

                while(sum>=s)
                {
                    sum-=ans.front();
                    ans.pop_front();

                    if(sum<s) break;

                    int sz = ans.size();

                    if(sz<mini) mini = sz;
                }
            }
        }

        if(!flag) mini = 0;
        cout<<mini<<endl;
    }

    return 0;
}

