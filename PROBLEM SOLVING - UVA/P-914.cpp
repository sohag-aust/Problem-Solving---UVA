#include<bits/stdc++.h>
using namespace std;

bool ara[1000022];

void seive()
{
    memset(ara,true,sizeof(ara));
    ara[0]=ara[1]=false;

    for(int i=2; i<=sqrt(1000020); i++)
    {
        if(ara[i])
        {
            for(int j=2*i; j<=1000020; j+=i)
                ara[j]=false;
        }
    }
}

int main()
{
    seive();

    int test;
    int l,u;

    cin>>test;
    while(test--)
    {
        vector<int>diff,ans,v;

        cin>>l>>u;

        for(int i=l; i<=u; i++)
        {
            if(ara[i])
                v.push_back(i);
        }

        if(v.size()==0)
            cout<<"No jumping champion";

        else
        {
            for(int i=1; i<v.size(); i++)
                diff.push_back(v[i]-v[i-1]);

            map<int,int>mp,MP;
            set<int>st;

            for(int i=0; i<diff.size(); i++)
            {
                st.insert(diff[i]);
                mp[diff[i]]++;
            }

            if(st.size()==0)
                cout<<"No jumping champion";

            else
            {
                set<int>::iterator it;
                it=st.begin();

                while(it!=st.end())
                {
                    MP[mp[*it]]=*it;
                    ans.push_back(mp[*it]);
                    it++;
                }

                if(ans.size()==0)
                    cout<<"No jumping champion";

                else
                {
                    sort(ans.begin(),ans.end());
                    reverse(ans.begin(),ans.end());

                    if(ans[0]==ans[1])
                        cout<<"No jumping champion";
                    else
                        cout<<"The jumping champion is "<<MP[ans[0]];
                }
            }
        }

        cout<<endl;
    }

    return 0;
}
