#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("P-895.txt","r",stdin);
    string s;
    vector<string>v1;
    vector<int>v2;
    while(cin>>s)
    {
        if(s=="#") break;
        v1.push_back(s);
    }
    cin.ignore();
    while(getline(cin,s))
    {
        map<char,int>mp,mp1;

        if(s=="#") break;

        for(int k=0; k<s.size(); k++)
        {
            if(isalpha(s[k]))
                mp[s[k]]++;
        }

        int ans=0;

        for(int i=0; i<v1.size(); i++)
        {
            map<char,bool>visit1,visit2;
            int flag=1;
            string str=v1[i];
            for(int j=0; j<str.size(); j++)
                mp1[str[j]]++;

            int cnt=0;

            set<char>st,st1,st2;

            for(int k=0; k<s.size(); k++)
            {
                if(isalpha(s[k]))
                {
                    if(!visit1[s[k]])
                    {
                        for(int m=0; m<str.size(); m++)
                        {
                            st2.insert(str[m]);
                            if(!visit2[str[m]])
                            {
                                if(s[k]==str[m])
                                {
                                    st1.insert(s[k]);

                                    if(mp1[str[m]]>mp[s[k]])
                                    {
                                        flag=0;
                                        break;
                                    }
                                    else
                                        cnt++;
                                    st.insert(str[m]);
                                    visit2[str[m]]=true;
                                    visit1[s[k]]=true;
                                }
                            }
                        }

                        if(!flag) break;
                    }
                }
            }

            if(flag)
            {
                if(st1.size()==st.size() && st.size()==st2.size())
                    ans++;
            }

            mp1.clear();
        }

        v2.push_back(ans);
    }

    for(int i=0; i<v2.size(); i++)
        cout<<v2[i]<<endl;

    return 0;
}
