#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll p,q;
    ll cs=0;

    while(cin>>p>>q && p)
    {
        ll cnt;
        deque<ll>dq;
        vector<ll>ans;

        cnt = 1000;

        if(p<cnt)
            cnt = p;

        for(int i=1; i<=cnt; i++)
            dq.push_back(i);

        while(q--)
        {
            char ch;
            cin>>ch;

            if(ch == 'N')
            {
                ll frnt = dq.front();
                ans.push_back(frnt);

                dq.pop_front();
                dq.push_back(frnt);
            }

            else
            {
                ll k;
                cin>>k;

                deque<ll>::iterator it = dq.begin();
                it = find(dq.begin(), dq.end(), k);

                if(it != dq.end())
                {
                    ll pos = it-dq.begin();
                    ll value = dq.at(pos);
                    dq.erase(dq.begin()+pos);
                    dq.push_front(value);
                }

                else
                    dq.push_front(k);
            }
        }

        cout<<"Case "<<++cs<<":"<<endl;
        for(auto it:ans)
            cout<<it<<endl;
    }

    return 0;
}
