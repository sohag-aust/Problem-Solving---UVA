#include<bits/stdc++.h>
using namespace std;

vector<string>ans[40];
int cnt=0;
set<int>st;
vector<string>v;

void check(string str)
{
    int sz = str.size();
    string blank = "";
    int flag = 0;

    for(int i=0; i<sz; i++)
    {
        if( !(str[i]=='.' || str[i]=='?' || str[i]==',' || str[i]=='!') )
        {
            flag = 0;

            if( ! (str[i]=='-' || str[i]=='\''))
                blank+=str[i];
        }

        else
        {
            flag = 1;

            int si = blank.size();

            ans[si].push_back(blank);
            st.insert(si);
            blank = "";
        }
    }

    if(!flag)
    {
        int si = blank.size();

        ans[si].push_back(blank);
        st.insert(si);

        flag=0;
    }
}

void init()
{
    cnt=0;
    st.clear();
    for(int i=0; i<=40; i++) ans[i].clear();
    v.clear();
}

int main()
{
    string s;

    while(cin>>s)
    {
        cnt++;
        bool line = true;

        if(s=="#")
        {
            for(int i=0; i<v.size(); i++)
            {
                string str = v[i];
                check(str);
            }

            set<int>::iterator it = st.begin();


            for(int i=0; i<st.size(); i++)
            {
                int sii = ans[*it].size();

                if(*it>0)
                cout<<*it<<" "<<sii<<endl;

                it++;
            }

            init();

            cout<<endl;
        }

        else
        {
            if(cnt==1)
                v.push_back(s);

            else
            {
                string str = v[v.size()-1];

                int sz = str.size();

                if(str[sz-1] == '-' || str[sz-1]=='\'')
                {
                    str+=s;

                    v.pop_back();
                    v.push_back(str);
                }

                else v.push_back(s);
            }
        }
    }

    return 0;
}


