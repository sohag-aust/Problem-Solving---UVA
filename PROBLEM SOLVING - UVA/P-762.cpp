/**#include<bits/stdc++.h>
using namespace std;

const int maxi=10000;
vector<int>v[maxi];
int parent[maxi];
bool vis[maxi];
string st,en;
map<string,int>mp;
map<int,string>track;
int flag;

void init(int test)
{
    for(int i=0; i<=test; i++)
    {
        v[i].clear();
        parent[i]=i;
    }
}

void print(int last)
{
    if(parent[last]!=last) print(parent[last]);
    if(!vis[parent[last]])
    {
        flag=1;
        if(parent[last]==mp[en])
            vis[mp[en]]=true;

        cout << track[parent[last]] << endl;
        vis[parent[last]]=true;
    }
}

void bfs(int val)
{
    queue<int>q;
    vis[val]=true;
    q.push(val);

    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        int si=v[x].size();

        for(int i=0; i<si; i++)
        {
            int y=v[x][i];
            if(!vis[y])
            {
                vis[y]=true;
                parent[y]=x;
                q.push(y);
            }
        }
    }

    memset(vis,false,sizeof(vis));
    print(mp[en]);
}

int main()
{
    int test;
    bool blank=false;
    //cin.ignore();
    while(cin>>test)
    {
        flag=0;
        memset(vis,false,sizeof(vis));
        map<string,bool>visit;
        mp.clear();
        track.clear();
        int cnt=0;

        init(test);
        cin.ignore();
        string s1,s2;

        while(test--)
        {
            cin>>s1>>s2;

            if(!visit[s1])
            {
                mp[s1]=++cnt;
                track[cnt]=s1;
                visit[s1]=true;
            }

            if(!visit[s2])
            {
                mp[s2]=++cnt;
                track[cnt]=s2;
                visit[s2]=true;
            }

            v[mp[s1]].push_back(mp[s2]);
            v[mp[s2]].push_back(mp[s1]);
        }

        cin>>st>>en;
        if(blank) cout<<"\n";
        blank=true;
        bfs(mp[st]);

        cout<<"Flag: "<<flag<<endl;

        if(!flag)
            cout<<"No route"<<endl;
    }
}
*/

/**

AUTHOR : PHP

#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<algorithm>



#include<string>
#include<vector>
#include<map>
#include<queue>
#include<stack>


#define loop(i, n) for(int i=0; i<n; i++)
#define loopfrom1(i, n) for(int i=1; i<n; i++)
#define mem(array, value) memset(array, value, sizeof(array))
#define MIN(a, b) (a<b?a:b)
#define MAX(a, b) (a>b?a:b)
#define pb(a) push_back(a)
#define SZ size()
#define getint(n) scanf("%d", &n)
#define pi acos(-1.0)
#define inf 536870912         // 1<<29
#define debug cout<<"ok"<<endl
#define ll long long int
#define mod(a) (a>0?a:-a)


using namespace std;


map<string, vector<string> > graph;
map<string, int>visited;

map<string, string> root;


void bfs(string from, string to)
{//note: we start to go from "target" to "starting point" to make the graph!!
    int len;
    string s, temp;
    queue<string> Q;
    Q.push(to);
    visited[to] = 1;
    while( ! Q.empty() )
    {
        s = Q.front();
        len = graph[s].SZ;
        loop(i, len)
        {
            temp = graph[s][i];
            if(! visited[temp] )
            {
                root[temp] = s;
                if(temp == from)
                {
                    return;
                }
                visited[temp] = 1;
                Q.push(temp);
            }
        }
        Q.pop();
    }
    return;

}




int main()
{
    int input_line;
    string s1, s2;
    bool flag = false;
    while(getint(input_line) == 1)
    {
        graph.clear();
        root.clear();
        visited.clear();
        loop(i, input_line)
        {
            cin>>s1>>s2;
            graph[s1].pb(s2);
            graph[s2].pb(s1);
        }

        cin>>s1>>s2;
        bfs(s1, s2);


        if(flag)
        {
            printf("\n");
        }
        flag = true;

        if(root[s1] == "")
        {
            printf("No route\n");
            continue;
        }


        while( s1 != s2)
        {
            cout<<s1<<" ";
            s1 = root[s1];
            cout<<s1;
            cout<<endl;
        }

    }



    return 0;
}
*/



#include<bits/stdc++.h>
using namespace std;

const int maxi=10010;
string source,destination;
int root[maxi],t,s;
map<int,string>you;

void finding_path(int node)
{
    if(you[root[node]]!=you[s])
    {
        finding_path(root[node]);
        cout<<you[root[node]]<<" "<<you[node]<<endl;
    }
    else
        cout<<you[root[node]]<<" "<<you[node]<<endl;
}
int main()
{
    int test;
    bool blank=false;

    while(cin>>test)
    {
        if(blank)cout<<endl;
        blank=true;

        map<string,int>my;
        string u,v;
        vector<int>graph[maxi];

        int j=1;
        for(int i=1; i<=test; i++)
        {
            cin>>u>>v;
            if(my[u]==0)
            {
                my[u]=j;
                you[j]=u;
                j++;
            }
            if(my[v]==0)
            {
                my[v]=j;
                you[j]=v;
                j++;
            }
            graph[my[u]].push_back(my[v]);
            graph[my[v]].push_back(my[u]);
        }

        cin>>source>>destination;

        queue<int>q;

        q.push(my[source]);
        t=my[destination];
        int visit[maxi];

        memset(visit,0,sizeof visit);
        visit[my[source]]=1;
        s=my[source];
        int check=0;
        root[t]=0;
        int pop;

        while(!q.empty())
        {
            pop=q.front();
            q.pop();

            for(int i=0; i<graph[pop].size(); i++)
            {
                int v=graph[pop][i];
                if(visit[v]==0)
                {
                    root[v]=pop;
                    q.push(v);
                    visit[v]=1;
                }
            }
        }
        if(root[t]==0)
        {
            printf("No route\n");
        }
        else
        {
            if(source!=destination)
                finding_path(my[destination]);
        }
    }
    return 0;
}
