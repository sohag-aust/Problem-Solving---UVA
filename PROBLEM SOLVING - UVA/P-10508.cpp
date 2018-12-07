#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;

    while(cin>>n>>m)
    {
        string str;
        vector<string>v;
        vector<string>ans;

        while(n--)
        {
            cin>>str;
            v.push_back(str);
        }

        map<string,bool>mp;

        int c = 0;

        while(c<m)
        {
            if(c == 0)
                ans.push_back(v[c]);

            string s1 = ans[c];

            if(!mp[s1])
            {
                for(int j=0; j<v.size(); j++)
                {
                    if(mp[v[j]]) continue;

                    string s2 = v[j];

                    if(s1 == s2) continue;

                    else
                    {
                        string t1 = s1;
                        string t2 = s2;

                        int cnt = 0;

                        for(int k=0,l=0; k<t1.size(); k++,l++)
                        {
                            if(t1[k] != t2[l]) cnt++;
                        }

                        if(cnt == 1)
                        {
                            ans.push_back(s2);
                            mp[s1] = true;
                            c++;
                        }
                    }
                }
            }
        }

        for(int i=0; i<ans.size(); i++)
            cout<<ans[i]<<endl;
    }

    return 0;
}

