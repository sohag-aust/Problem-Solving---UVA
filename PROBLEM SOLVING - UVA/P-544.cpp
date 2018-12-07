#include<bits/stdc++.h>
using namespace std;

const int maxi=202;

int cost[maxi][maxi];

void init(int n)
{
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cost[i][j]=0;
}

int main()
{
    int node,edge;
    bool blank=false;

    while(cin>>node>>edge)
    {
        static int kase=0;
        if(!node && !edge) break;
        init(node);

        map<string,int>mp;
        map<string,bool>visit;
        int cnt=1;

        cin.ignore();

        while(edge--)
        {
            int w;
            string s1,s2;
            cin>>s1>>s2>>w;

            if(!visit[s1])
            {
                mp[s1]=cnt;
                cnt++;
                visit[s1]=true;
            }

            if(!visit[s2])
            {
                mp[s2]=cnt;
                cnt++;
                visit[s2]=true;
            }

            cost[mp[s1]][mp[s2]]=w;
            cost[mp[s2]][mp[s1]]=w;
        }

        for(int k=1; k<=node; k++)
        {
            for(int i=1; i<=node; i++)
            {
                for(int j=1; j<=node; j++)
                {
                    cost[i][j]=max(cost[i][j],min(cost[i][k],cost[k][j]));
                }
            }
        }

        string s,d;
        cin>>s>>d;

        cout<<"Scenario #"<<++kase<<"\n";
        cout<<cost[mp[s]][mp[d]]<<" tons"<<endl<<endl;
    }

    return 0;
}
