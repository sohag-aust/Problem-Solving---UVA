/// p-902

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string str,s,ans;

    while(cin>>n)
    {
        int maxi=0;
        ans=s="";
        map<string,int>mp;
        cin>>str;

        for(int i=0;i<str.size();i++)
        {
            s="";
            if(i+n>str.size()) break;
            for(int j=i;j<i+n;j++)
                s+=str[j];

            if(s.size()==n)
                mp[s]++;

            if(mp[s]>maxi)
            {
                maxi=mp[s];
                ans=s;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}

