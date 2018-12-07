#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n,n)
    {
        map<vector<int>,int>mp;
        int maxi = 0;

        for(int i=0; i<n; i++)
        {
            vector<int>v;

            for(int j=0; j<5; j++)
            {
                int val;
                cin>>val;
                v.push_back(val);
            }

            sort(v.begin(),v.end());

            mp[v]++;
            maxi = max(maxi,mp[v]);
        }

        int ans = 0;

        for(auto &x : mp)
        {
            if(x.second == maxi) ans += maxi;
        }

        cout<<ans<<endl;
    }

    return 0;
}

