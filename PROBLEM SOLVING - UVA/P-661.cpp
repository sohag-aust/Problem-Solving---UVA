#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,c,val;

    while(cin>>n>>m>>c)
    {
        static int cs = 0;

        if(!n && !m && !c) break;

        map<int,int>mp,cnt;

        for(int i=1;i<=n;i++)
        {
            cin>>val;
            mp[i] = val;
        }

        int sum = 0;
        int maxi = 0;
        int flag = 1;

        for(int i=1;i<=m;i++)
        {
            cin>>val;
            cnt[val]++;

            if(cnt[val]%2 != 0)
            {
                sum += mp[val];
                maxi = max(sum,maxi);
            }

            else
                sum -= mp[val];


            if(sum > c)
                flag = 0;
        }

        if(!flag)
            cout<<"Sequence "<<++cs<<endl<<"Fuse was blown."<<endl;
        else
            cout<<"Sequence "<<++cs<<endl<<"Fuse was not blown."<<endl<<"Maximal power consumption was "<<maxi<<" amperes."<<endl;
        cout<<endl;
    }

    return 0;
}

