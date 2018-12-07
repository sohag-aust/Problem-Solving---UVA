#include<bits/stdc++.h>
using namespace std;

typedef tuple<bool,int,int> tii;

int main()
{
    int n,t,s;

    while(cin>>n>>t>>s)
    {
        map<char,tuple<bool,int,int> >mp;
        map<set<pair<int,char> >,int>cnt;

        while(s--)
        {
            int time,team;
            char prob;
            string verdict;

            cin>>time>>team>>prob>>verdict;

            if(verdict == "Yes")
            {
                set<pair<int,char> >st;
                st.insert({team,prob});

                if(!cnt[st])
                {
                    mp[prob] = tii(true,time,team);
                    cnt[st] = 1;
                }
            }
        }

        for(int i=1; i<=n; i++)
        {
            char ch = i+64;
            if(get<0>(mp[ch])) cout<<ch<<" "<<get<1>(mp[ch])<<" "<<get<2>(mp[ch]);
            else cout<<ch<<" - -";
            cout<<endl;
        }
    }

    return 0;
}
