#include<bits/stdc++.h>
using namespace std;

int parent[200000+10];

struct edges
{
    int a,b,w;
} kk;

bool cmp(edges x,edges y)
{
    if(x.w<y.w) return true;
    return false;
}

void makeset(int n)
{
    for(int i=0; i<n; i++)
        parent[i]=i;
}

int findset(int r)
{
    if(r==parent[r]) return r;

    else
    {
        parent[r]=findset(parent[r]);
        return parent[r];
    }
}

void makeunion(int uu,int vv)
{
    parent[uu]=vv;
}

int main()
{
    int node,edge;

    while(cin>>node>>edge)
    {
        memset(parent,0,sizeof(parent));

        if(!node && !edge)
            break;

        makeset(node);

        vector<edges>v,ans;

        int sum1=0;

        for(int i=0; i<edge; i++)
        {
            cin>>kk.a>>kk.b>>kk.w;
            sum1+=kk.w;
            v.push_back(kk);
        }

        sort(v.begin(),v.end(),cmp);

        for(int i=0; i<v.size(); i++)
        {
            int uu=findset(v[i].a);
            int vv=findset(v[i].b);

            if(uu!=vv)
            {
                makeunion(uu,vv);
                ans.push_back(v[i]);
            }
        }

        int sum=0;

        for(int i=0; i<ans.size(); i++)
        {
            int val=ans[i].w;
            sum+=val;
        }

        cout<<"Total cost - Minimum cost: ";
        cout<<sum1-sum<<endl;
    }

    return 0;
}
