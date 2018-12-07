#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    vector<string>v,vv;

    while(cin>>s)
    {
        v.push_back(s);
    }

    string str,ans="";

    for(int i=0; i<v.size(); i++)
    {
        str = v[i];
        int len = str.size();

        if(str[len-1]=='-')
        {
            for(int i=0; i<len-1; i++)
            {
                if(isalpha(str[i]))
                    ans+=(char)tolower(str[i]);

                else if(str[i]=='-')
                    ans+=str[i];
            }
        }

        else
        {
            for(int i=0; i<str.size(); i++)
            {
                if(isalpha(str[i]))
                    ans+=(char)tolower(str[i]);

                else if(str[i]=='-')
                    ans+=str[i];

                else
                {
                    vv.push_back(ans);
                    ans="";
                }
            }

            vv.push_back(ans);
            ans="";
        }
    }

    set<string>st;

    for(int i=0; i<vv.size(); i++)
    {
        if(vv[i].size()>0)
            st.insert(vv[i]);
    }

    set<string>::iterator it;
    it=st.begin();

    while(it!=st.end())
    {
        cout<<*it<<endl;
        it++;
    }

    return 0;
}

