#include<bits/stdc++.h>
using namespace std;

typedef pair<double, double> pii;

struct edge
{
    int x,y;
    double distance;
} ed;

vector<edge>edges,ans;
int parent[210];

bool cmp(edge a1, edge b1)
{
    return a1.distance < b1.distance;
}

void make_set(int node)
{
    for(int i=0; i<=node; i++)
        parent[i] = i;

    edges.clear();
    ans.clear();
}

int find_set(int val)
{
    while(val != parent[val])
        val = parent[val];
    return val;
}

int main()
{
    int test;
    cin>>test;
    cin.ignore();

    while(test--)
    {
        int node;
        cin>>node;

        make_set(node);

        vector<pii>v;

        for(int i=1; i<=node; i++)
        {
            double cord1,cord2;
            cin>>cord1>>cord2;
            v.push_back({cord1,cord2});
        }

        for(int i=0; i<v.size()-1; i++)
        {
            for(int j=i+1; j<v.size(); j++)
            {
                double dist = sqrt( (fabs(v[i].first - v[j].first) * fabs(v[i].first - v[j].first)) + (fabs(v[i].second - v[j].second) * fabs(v[i].second - v[j].second)) );

                ed.x = i, ed.y = j, ed.distance = dist;
                edges.push_back(ed);
            }
        }

        sort(edges.begin(),edges.end(),cmp);

        for(int i=0; i<edges.size(); i++)
        {
            int uu = find_set(edges[i].x);
            int vv = find_set(edges[i].y);

            if(uu != vv)
            {
                parent[uu] = vv;
                ans.push_back(edges[i]);
            }
        }

        double sum = 0.0;

        for(auto it:ans)
        {
            sum += it.distance;
        }

        cout<<setprecision(2)<<fixed<<sum<<endl;

        if(test)
            cout<<endl;

        cin.ignore();
    }

    return 0;
}
