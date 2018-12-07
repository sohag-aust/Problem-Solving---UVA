#include<bits/stdc++.h>
using namespace std;

const int maxi=10010;
vector<int>v[maxi];
map<int,bool>visit;

void init(int n)
{
    for(int i=1;i<=n;i++)
        v[i].clear();
}

void bfs(int i)
{
    visit[i]=true;
    queue<int>q;
    q.push(i);

    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        int si=v[x].size();

        for(int j=0;j<si;j++)
        {
            int val=v[x][j];
            if(!visit[val])
            {
                q.push(val);
                visit[val]=true;
            }
        }
    }
}

int main()
{
    int test,node,edge,start;
    cin>>test;

    while(test--)
    {
        cin>>node>>edge>>start;
        init(node);
        visit.clear();

        while(edge--)
        {
            int x,y;
            cin>>x>>y;
            v[x].push_back(y);
        }

        for(int i=1;i<=start;i++)
        {
            int s;
            cin>>s;
            bfs(s);
        }

        int cnt=0;

        for(int i=1;i<=node;i++)
        {
            if(visit[i]) cnt++;
        }

        cout<<cnt<<endl;
    }

    return 0;
}

