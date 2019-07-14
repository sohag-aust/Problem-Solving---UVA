#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int maxi = 1000 + 5;
vector<int>v[maxi];

void pre()
{
    for(int i=1;i<=maxi;i++)
    {
        for(int j=i;j<=maxi;j+=i)
            v[j].push_back(i);
    }
}

int main()
{
    pre();

    int test;
    cin>>test;

    while(test--)
    {
        int n;
        cin>>n;

        int sz = v[n].size();
        ll sum = 0;

        for(int i=0;i<sz;i++)
        {
            if(v[n][i] == n) break;
            sum += v[n][i];
        }

        if(sum == n) cout<<"perfect";
        else if(sum < n) cout<<"deficient";
        else cout<<"abundant";
        cout<<endl;
    }

    return 0;
}
