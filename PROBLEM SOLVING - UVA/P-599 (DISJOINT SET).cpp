#include<bits/stdc++.h>
using namespace std;

#define sz 26

map<char,int>mp;
map<int,int>degree;
int parent[sz+4];
vector<int>v;

void init()
{
    int k = 0;

    for(char ch = 'A';ch<='Z';ch++)
        mp[ch] = ++k;
}

void make_set()
{
    for(int i=1;i<=sz;i++)
        parent[i] = i;
}

int find_set(int val)
{
    while(val != parent[val])
        val = parent[val];

    return val;
}

void union_set(int u,int v)
{
    if(u > v)
        parent[v] = u;
    else
        parent[u] = v;
}

int main()
{
    init();

    int test;
    cin>>test;

    while(test--)
    {
        make_set();
        degree.clear();
        v.clear();

        string str;
        while(cin>>str && str[0] != '*')
        {
            int u = find_set(mp[str[1]]);
            int v = find_set(mp[str[3]]);

            degree[u] = degree[v] = 1;

            if(u != v)
                union_set(u,v);
        }

        string s;
        cin>>s;

        stringstream ss(s);
        char ch;

        while(ss>>ch)
        {
            if(ch != ',')
                v.push_back(mp[ch]);
        }

        int tree,acorn;
        tree = acorn = 0;

        for(int i=0;i<v.size();i++)
        {
            int val = v[i];

            if(val == parent[val])
            {
                tree++;
                if(degree[val] == 0)
                    tree--, acorn++;
            }
        }

        cout<<"There are "<<tree<<" tree(s) and "<<acorn<<" acorn(s)."<<endl;
    }

    return 0;
}

