#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("473in.txt","r",stdin);
    //freopen("473out.txt","w",stdout);

    string s,a,b;

    map<string,string>mp;

    while(getline(cin,a))
    {
        if(a.size() == 0) break;

        stringstream ss(a);

        string s;

        vector<string>v;

        while(ss>>s)
            v.push_back(s);

        mp[v[1]] = v[0];
    }

    while(cin>>b)
    {
        if(!mp[b].empty()) cout<<mp[b];
        else cout<<"eh";

        cout<<endl;
    }

    return 0;
}
