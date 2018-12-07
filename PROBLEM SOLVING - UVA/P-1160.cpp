#include<bits/stdc++.h>
using namespace std;

#define maxi 100000+5
int parent[maxi];

void make_set()
{
    for(int i=0; i<=maxi; i++)
        parent[i] = i;
}

void set_union(int a,int b)
{
    parent[a] = b;
}

int find_union(int r)
{
    if(parent[r] == r)
        return r;

    return parent[r] = find_union(parent[r]);
}

int main()
{
    int a,b,cnt = 0;

    make_set();

    while(cin>>a)
    {
        if(a == -1)
        {
            cout<<cnt<<endl;
            cnt = 0;
            make_set();
            continue;
        }

        cin>>b;

        int u = find_union(a);
        int v = find_union(b);

        //cout<<"pola(u): "<<u<<endl;
        //cout<<"bap(v): "<<v<<endl;

        if(u == v) cnt++;
        else set_union(u,v);
    }

    return 0;
}

