#include<bits/stdc++.h>
using namespace std;

struct st
{
    int cnt;
} ara[1010];

bool cmp(st a,st b)
{
    return a.cnt<b.cnt;
}

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int p;

        cin>>p;
        cin.ignore();
        string str;

        map<int,int>mp;
        vector<int>vv[1010];

        for(int i=0; i<p; i++)
        {
            getline(cin,str);
            stringstream ss(str);

            int n;
            vector<int>v;

            while(ss>>n)
            {
                v.push_back(n);
            }

            int sz = v.size();
            ara[i].cnt = sz;
            vv[sz].push_back(i+1);
        }

        sort(ara,ara+p,cmp);

        int mini = ara[0].cnt;
        int siz = vv[mini].size();

        for(int i=0; i<siz; i++)
        {
            if(i==siz-1)
                cout<<vv[mini][i]<<endl;
            else cout<<vv[mini][i]<<" ";
        }

        cin.ignore();
    }

    return 0;
}

