#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str,s,s1;
    int n;
    bool blank=false;

    while(cin>>n)
    {
        map<string,int>mp;
        vector<string>v;

        for(int i=0; i<n; i++)
        {
            cin>>s;
            v.push_back(s);
            mp[s]=0;
        }

        int price,person;

        for(int i=0; i<n; i++)
        {
            cin>>str;
            cin.ignore();
            cin>>price>>person;

            mp[str]-=price;

            if(!person)
            {
                mp[str]+=price;
                continue;
            }

            int div=price/person;
            int tot=price-(div*person);

            mp[str]+=tot;

            for(int j=0; j<person; j++)
            {
                cin>>s1;
                mp[s1]+=div;
            }
        }

        if(blank) puts("");
        blank=true;

        for(int i=0; i<n; i++)
            cout<<v[i]<<" "<<mp[v[i]]<<endl;
    }

    return 0;
}

