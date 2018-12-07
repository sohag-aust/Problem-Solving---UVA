#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    int test;
    cin>>test;
    cin.ignore();

    while(test--)
    {
        map<char,int>mp1,mp2;
        vector<char>v1,v2;
        vector<int>v11,v22;
        map<char,bool>visit1,visit2;
        map<char,char>mp;

        cin.ignore();
        cin>>s1>>s2;

        for(int i=0;i<s1.size();i++)
        {
            if(!visit1[s1[i]])
            {
                v1.push_back(s1[i]);
                visit1[s1[i]]=true;
            }

            mp1[s1[i]]++;
        }

        for(int i=0;i<s2.size();i++)
        {
            if(!visit2[s2[i]])
            {
                v2.push_back(s2[i]);
                visit2[s2[i]]=true;
            }

            mp2[s2[i]]++;
        }

        visit1.clear();visit2.clear();

        for(int i=0;i<v1.size();i++)
            v11.push_back(mp1[v1[i]]);

        for(int i=0;i<v2.size();i++)
            v22.push_back(mp2[v2[i]]);

        sort(v11.begin(),v11.end(),greater<int>());
        sort(v22.begin(),v22.end(),greater<int>());

        char ch1,ch2;

        for(int i=0;i<v1.size();i++)
        {
            int max1=v11[i];
            int max2=v22[i];

            for(int j=0;j<v1.size();j++)
            {
                if(!visit1[v1[j]])
                {
                    if(mp1[v1[j]]==max1)
                    {
                        ch1=v1[j];
                        visit1[v1[j]]=true;
                        break;
                    }
                }
            }

            for(int k=0;k<v2.size();k++)
            {
                if(!visit2[v2[k]])
                {
                    if(mp2[v2[k]]==max2)
                    {
                        ch2=v2[k];
                        visit2[v2[k]]=true;
                        break;
                    }
                }
            }

            mp[ch2]=ch1;
        }

        for(int i=0;i<s2.size();i++)
            cout<<mp[s2[i]];
        cout<<endl;

        if(test) puts("");
    }

    return 0;
}


