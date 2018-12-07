#include<bits/stdc++.h>
using namespace std;
vector<char>v[10010];

void init()
{
    for(int i=0;i<=10010;i++) v[i].clear();
}

int main()
{
    int cs = 0;
    int n;

    while(cin>>n)
    {
        string str;
        int ara[140];
        set<char>st;

        int cnt = 0;

        for(int i=0;i<n;i++)
        {
            cin>>str;

            memset(ara,0,sizeof(ara));
            st.clear();
            init();

            int ln = str.size();

            for(int j=0;j<ln;j++)
            {
                st.insert(str[j]);
                int vv = str[j]-96;
                ara[vv]++;
            }

            set<char>::iterator it = st.begin();

            while(it!=st.end())
            {
                char ch = *it;
                int vv = ch-96;
                int val = ara[vv];

                v[val].push_back(ch);
                it++;
            }

            int flag = 1;

            for(int j=0;j<ln;j++)
            {
                int vv = str[j]-96;
                int val = ara[vv];

                if(v[val].size()>1){
                    flag = 0;
                    break;
                }
            }

            if(flag && st.size()>1) cnt++;
        }

        cout<<"Case "<<++cs<<": "<<cnt<<endl;
    }

    return 0;
}

