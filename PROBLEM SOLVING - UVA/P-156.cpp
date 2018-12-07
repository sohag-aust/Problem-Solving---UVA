#include<bits/stdc++.h>
using namespace std;

string sorted(string s)
{
    for(int i=0;s[i];i++)
        s[i] = tolower(s[i]);

    return s;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);

    string str;
    map<string,int>mp;
    set<pair<string,string> >st;

    while(cin>>str)
    {
        if(str == "#") break;

        string temp = sorted(str);

        sort(temp.begin(),temp.end());

        mp[temp]++;

        st.insert({str,temp});
    }

    for(auto i : st)
    {
        string temp_first = i.first;
        string temp_second = i.second;

        if(mp[temp_second] == 1)
            cout<<temp_first<<endl;
    }

    return 0;
}


