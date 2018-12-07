#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll num;

    while(cin>>num)
    {
        if(!num) break;

        vector<int>desc,asc;
        map<ll,ll>mp;
        int cnt = 0;

        cout<<"Original number was "<<num<<endl;

        ll temp1 = num;

        while(true)
        {
            desc.clear();
            asc.clear();

            while(temp1 != 0)
            {
                desc.push_back(temp1%10);
                asc.push_back(temp1%10);
                temp1 /= 10;
            }

            sort(asc.begin(),asc.end());
            sort(desc.begin(),desc.end(),greater<ll>());

            reverse(asc.begin(),asc.end());
            reverse(desc.begin(),desc.end());

            ll sum_asc = 0;
            ll sum_desc = 0;

            for(int i=0; i<asc.size(); i++)
            {
                double po = pow((double)10,(double)i);
                double val = (double)asc[i] * po;
                sum_asc += (ll)val;
            }

            for(int i=0; i<desc.size(); i++)
            {
                double po = pow((double)10,(double)i);
                double val = (double)desc[i] * po;
                sum_desc += (ll)val;
            }

            ll diff = abs(sum_desc - sum_asc);
            temp1 = diff;

            mp[diff]++;
            cnt++;

            cout<<sum_desc<<" - "<<sum_asc<<" = "<<diff<<endl;

            if(mp[diff] > 1) break;
        }

        cout<<"Chain length "<<cnt<<endl;
        cout<<endl;
    }

    return 0;
}

