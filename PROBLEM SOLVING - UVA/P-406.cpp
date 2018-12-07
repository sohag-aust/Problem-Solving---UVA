#include<bits/stdc++.h>
using namespace std;

map<int,bool>mp,visit;
map<int,int>prime;
vector<int>v;

void seive(int n)
{
    mp[1]=true;
    for(int i=2; i*i<=n; i++)
    {
        if(!mp[i])
        {
            for(int j=2*i; j<=n; j+=i)
            {
                mp[j]=true;
            }
        }
    }

    int cnt=1;

    for(int i=2; i<=n; i++)
    {
        if(!mp[i])
        {
            v.push_back(i);
            prime[cnt]=i;
            visit[i]=true;
            cnt++;
        }
    }
}

int main()
{
    mp.clear();
    visit.clear();
    seive(1010);

    int n,c;

    while(cin>>n>>c)
    {
        vector<int>ans;
        int cnt=0;
        for(int i=1; i<=n; i++)
        {
            if(visit[i])
                cnt++;
        }

        if(cnt%2==0)
        {
            int val=2*c;
            if(val>cnt)
            {
                ans.push_back(1);
                for(int i=2; i<=n; i++)
                {
                    if(visit[i])
                        ans.push_back(i);
                }
            }

            else
            {
                int cn=0;
                for(int i=val; i<=n; i++)
                {
                    if(visit[i])
                    {
                        ans.push_back(i);
                        cn++;
                        if(cn==val-1) break;
                    }
                }
            }
        }

        else
        {
            int val=(2*c)-1;
            if(val>cnt)
            {
                ans.push_back(1);
                for(int i=2; i<=n; i++)
                {
                    if(visit[i])
                        ans.push_back(i);
                }
            }

            else
            {
                int cn=0;
                for(int i=val; i<=n; i++)
                {
                    if(visit[i])
                    {
                        ans.push_back(i);
                        cn++;
                        if(cn==val+1) break;
                    }
                }
            }
        }

        cout<<n<<" "<<c<<": ";
        for(int i=0; i<ans.size(); i++)
        {
            if(i==ans.size()-1)
                cout<<ans[i]<<endl;
            else
                cout<<ans[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}
