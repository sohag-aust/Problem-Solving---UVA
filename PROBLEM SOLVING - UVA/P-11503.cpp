#include<bits/stdc++.h>
using namespace std;

const int maxi=100010;
vector<int>vi;

int parent[maxi];
int cost[maxi];

void make_set(int n)
{
    for(int i=0; i<=n; i++)
    {
        parent[i]=i;
        cost[i]=1;
    }
}

int find_set(int r)
{
    if(parent[r]==r) return r;
    return parent[r]=find_set(parent[r]);
}

void set_union(int uu,int vv)
{
    if(uu!=vv)
    {
        parent[vv]=uu;
        cost[uu]=cost[uu]+cost[vv];
        vi.push_back(cost[uu]);
    }

    else
        vi.push_back(cost[uu]);
}

int main()
{
    set<string>st;
    map<int,pair<string,string> >Mp;
    string s1,s2;
    int test,edge,k;

    cin>>test;

    while(test--)
    {
        k=0;
        pair<string,string>p;

        cin>>edge;
        cin.ignore();

        while(edge--)
        {
            cin>>s1>>s2;
            p=make_pair(s1,s2);
            Mp[k]=p;
            k++;

            st.insert(s1);
            st.insert(s2);
        }

        set<string>::iterator it=st.begin();
        map<string,int>mp;
        int cnt=0;

        while(it!=st.end())
        {
            mp[*it]=cnt;
            cnt++;
            it++;
        }

        int n=st.size();
        make_set(n);

        for(int i=0; i<k; i++)
        {
            int u=find_set(mp[Mp[i].first]);
            int v=find_set(mp[Mp[i].second]);

            set_union(u,v);
        }

        for(int i=0; i<vi.size(); i++)
            cout<<vi[i]<<endl;

        vi.clear();
    }
    return 0;
}

