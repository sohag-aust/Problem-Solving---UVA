#include<bits/stdc++.h>
using namespace std;

vector<int>v[300];
map<int,int>in,out;
bool visit[300];
map<int,char>mp;
int flag;

void init(int n)
{
    for(int i=0; i<=n; i++)
    {
        v[i].clear();
        mp[i] = 'B';
    }

    memset(visit,false,sizeof(visit));
}

void bfs(int num)
{
    queue<int>q;
    q.push(num);

    while(!q.empty())
    {
        int val;
        int frnt = q.front();

        if(mp[frnt]=='B')
            mp[frnt]='R';

        q.pop();

        int sz = v[frnt].size();

        for(int i=0; i<sz; i++)
        {
            val = v[frnt][i];

            if(mp[frnt]=='R' && mp[val]=='B') mp[val]='G';
            else if(mp[frnt]=='G' && mp[val]=='B') mp[val]='R';

            if(mp[frnt] == mp[val])
            {
                flag=0;
                return ;
            }

            if(!visit[val])
            {
                q.push(val);
                visit[val] = true;
            }
        }
    }
}

int main()
{
    int node,edge;

    while(cin>>node)
    {
        if(!node) break;
        cin>>edge;

        init(node);

        int mini = 1e6;

        while(edge--)
        {
            int a,b;
            cin>>a>>b;

            if(a<mini) mini = a;
            if(b<mini) mini = b;

            v[a].push_back(b);
            v[b].push_back(a);
        }

        flag = 1;

        bfs(mini);

        if(flag) cout<<"BICOLORABLE.";
        else cout<<"NOT BICOLORABLE.";

        cout<<endl;
    }

    return 0;
}
