#include<bits/stdc++.h>
using namespace std;

const int sz = 1299709 + 2;
bool visit[sz];

vector<int>prime;
vector<pair<int,int> >ans;
map<int,int>ok;

void sieve()
{
    memset(visit,false,sizeof(visit));

    visit[0] = visit[1] = true;
    prime.push_back(2);
    ok[2] = 1;
    int ind = 1;

    for(int i=3; i<=sz; i+=2)
    {
        if(visit[i]) continue;

        prime.push_back(i);
        ok[i] = 1;
        ans.push_back({prime[ind-1],prime[ind]});
        ind++;

        for(int j=i; j<=sz; j+=2*i)
            visit[j] = true;
    }
}

void b_search(int n)
{
    int low = 0;
    int high = ans.size();
    int mid = (low+high) / 2;

    while(low <= high)
    {
        if(n>ans[mid].first && n<ans[mid].second)
        {
            cout<<ans[mid].second - ans[mid].first<<endl;
            break;
        }

        if(n < ans[mid].first) high = mid-1;
        else if(n > ans[mid].second) low = mid+1;

        mid = (low+high) / 2;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sieve();

    int n;
    while(cin>>n && n)
    {
        if(ok[n]) cout<<0<<endl;
        else b_search(n);
    }

    return 0;
}
