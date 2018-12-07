#include<bits/stdc++.h>
using namespace std;

const int maxi=1000005;
vector<int>v;
map<int,int>visit;

void seive()
{
    for(int i=2;i*i<=maxi;i++)
    {
        if(!visit[i])
        {
            for(int j=2*i;j<=maxi;j+=i)
                visit[j]=true;
        }
    }

    for(int i=2;i<=maxi;i++)
    {
        if(!visit[i])
            v.push_back(i);
    }
}

int main()
{
    seive();

    int n;
    while(cin>>n)
    {
        int cnt=0;
        if(!n) break;
        for(int i=0;i<v.size();i++)
        {
            if(n%v[i]==0)
                cnt++;
        }

        cout<<n<<" : "<<cnt<<endl;
    }

    return 0;
}

