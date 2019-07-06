#include<bits/stdc++.h>
using namespace std;

const int sz = 20000000 + 5;
bool visit[sz+5];
vector<int>v;
vector<pair<int,int> >ans;

void seive()
{
    memset(visit,false,sizeof(visit));
    visit[0] = visit[1] = 1;

    v.push_back(2);

    for(int i=3; i<=sz; i+=2)
    {
        if(visit[i])
            continue;
        v.push_back(i);

        for(int j=i; j<=sz; j+=2*i)
            visit[j] = 1;

    }

    for(int i=1; i<v.size(); i++)
    {
        if(v[i]-v[i-1] == 2)
            ans.push_back({v[i-1],v[i]});
    }
}

int main()
{
    seive();
    int n;
    while(cin>>n)
    {
        n--;
        cout<<"("<<ans[n].first<<", "<<ans[n].second<<")"<<endl;
    }

    return 0;
}
