#include<bits/stdc++.h>
using namespace std;

string s,a;
set<string>st;
map<string,int>mp;
vector<string>v;

int main()
{
    int test;

    cin>>test;
    cin.ignore();

    while(test--)
    {
        getline(cin,s);
        stringstream ss(s);

        while(ss>>a)
            v.push_back(a);

        st.insert(v[0]);
        mp[v[0]]++;

        v.clear();
        ss.clear();
    }

    set<string>::iterator it;

    it=st.begin();

    while(it!=st.end())
    {
        cout<<*it<<" "<<mp[*it]<<endl;
        it++;
    }

    return 0;
}

