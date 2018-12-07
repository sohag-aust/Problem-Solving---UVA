#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("14.txt","r",stdin);

    string str;
    vector<string>v;

    int maxi=0,cnt=0;

    while(cin>>str)
    {
        if(str=="#") break;

        v.push_back(str);

        int len=str.size();

        cnt++;
        maxi=max(maxi,len);
    }

    char ch[5000][25];

    for(int i=0; i<cnt; i++)
    {
        string s=v[i];
        int k=0;

        for(int j=0; j<maxi; j++)
        {
            if(k<s.size())
                ch[i][j]=s[k];

            else
                ch[i][j]='*';

            k++;
        }
    }

    map<char,int>mp;
    vector<char>ans;

    for(int i=0;i<maxi;i++)
    {
        for(int j=0;j<cnt;j++)
        {
            char c = ch[j][i];

            if(isalpha(c) && !mp[c])
            {
                ans.push_back(c);
                mp[c]=1;
            }
        }
    }

    for(int i=0;i<ans.size();i++)
        cout<<ans[i];

    cout<<endl;

    return 0;
}

