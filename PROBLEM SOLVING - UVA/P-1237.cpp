#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        string car;
        int n,l,h;
        map<pair<int,int>,string >mp;
        pair<int,int>p;
        vector<pair<int,int> >v;

        cin>>n;
        cin.ignore();

        for(int i=0; i<n; i++)
        {
            cin>>car;
            cin>>l>>h;

            p=make_pair(l,h);
            mp[p]=car;
            v.push_back(p);
        }

        int q,price;
        cin>>q;

        while(q--)
        {
            cin>>price;
            int flag=0;
            string s;

            for(int i=0; i<v.size(); i++)
            {
                int st=v[i].first;
                int en=v[i].second;

                p=make_pair(st,en);

                if(price>=st && price<=en)
                {
                    s=mp[p];
                    flag++;
                }
            }

            if(flag==0 || flag>1)
                cout<<"UNDETERMINED"<<endl;
            else
                cout<<s<<endl;
        }

        if(test)
            cout<<endl;
    }

    return 0;
}

