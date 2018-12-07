#include<bits/stdc++.h>
using namespace std;

map<string,bool>visit;

int main()
{
    //freopen("321.txt","r",stdin);
    int k,m;
    string s;

    while(cin>>k)
    {
        if(!k) break;
        cin>>m;

        visit.clear();

        vector<string>v,v1;

        for(int i=0;i<k;i++)
        {
            cin>>s;
            visit[s]=true;
            v.push_back(s);
        }

        int c,cr;
        int flag=1;

        while(m--)
        {
            v1.clear();

            cin>>c>>cr;
            int cnt=0;

            for(int i=0;i<c;i++)
            {
                cin>>s;
                v1.push_back(s);
            }

            for(int i=0;i<v1.size();i++)
            {
                string val=v1[i];

                if(visit[val]) cnt++;
            }

            if(cnt<cr && flag)
                flag=0;
        }

        if(flag) cout<<"yes";
        else cout<<"no";
        cout<<endl;
    }

    return 0;
}

