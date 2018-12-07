#include<bits/stdc++.h>
using namespace std;

map<char,int>mp;
int parent[100];
int node;

void init()
{
    int j=1;
    for(char i='A'; i<='Z'; i++)
    {
        mp[i]=j;
        j++;
    }
}

void make_set(int n)
{
    for(int i=0; i<=n; i++)
        parent[i]=i;
}

int find_set(int r)
{
    if(parent[r]==r) return r;
    return parent[r]=find_set(parent[r]);
}

void set_union(int u,int v)
{
    if(u!=v)
    {
        parent[v]=u;
        node--;
    }
}

int main()
{
    init();
    int test;
    char ch;
    string str;

    cin>>test;
    cin.ignore();

    while(test--)
    {
        cin>>ch;
        cin.ignore();

        node=mp[ch];
        make_set(node);

        while(getline(cin,str))
        {
            if(str.size()==0) break;

            int u=find_set(mp[str[0]]);
            int v=find_set(mp[str[1]]);

            set_union(u,v);
        }

        cout<<node<<endl;
        if(test) cout<<endl;
    }

    return 0;
}

