#include<bits/stdc++.h>
using namespace std;

#define maxi 110

vector<int>v[maxi];
int visit[maxi];
int level[maxi];
int cnt;

void bfs(int st,int en)
{
    memset(visit,0,sizeof(visit));

    queue<int>q;
    q.push(st);
    visit[st] = 1;
    level[st] = 0;

    while(!q.empty())
    {
        int frnt = q.front();
        q.pop();

        int sz = v[frnt].size();

        for(int i=0; i<sz; i++)
        {
            int val = v[frnt][i];

            if(!visit[val])
            {
                q.push(val);
                visit[val] = 1;
                level[val] = level[frnt]+1;
            }
        }
    }

    if(st<10) cout<<" ";
    cout<<st<<" to ";

    if(en<10) cout<<" ";
    cout<<en<<": "<<level[en]<<endl;
}

void CLR()
{
    cnt = 0;
    memset(level,0,sizeof(level));

    for(int i=0; i<=maxi; i++)
        v[i].clear();
}

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int st,en,n,cs;
    cnt = cs = 0;

    while(cin>>n)
    {
        ++cnt;

        int node;

        for(int i=1; i<=n; i++)
        {
            cin>>node;
            v[cnt].push_back(node);
            v[node].push_back(cnt);
        }

        if(cnt == 19)
        {
            cout<<"Test Set #"<<++cs<<endl;

            int query;
            cin>>query;

            while(query--)
            {
                cin>>st>>en;
                bfs(st,en);
            }

            cout<<endl;

            CLR();
        }
    }

    return 0;
}

