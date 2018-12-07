#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    int n,m;

    string s1,s2,str;
    map<string, string>mp;
    map<string, int>Mp;
    map<int,string>MP;
    set<string>st;
    vector<int>v;

    cin>>test;
    cin.ignore();
    cin.ignore();

    while(test--)
    {
        int ind=0;
        cin>>n;
        cin.ignore();

        while(n--)
        {
            getline(cin,s1);
            getline(cin,s2);

            st.insert(s1);
            mp[s1]=s2;

            if(s2=="independent")
                ind++;
        }

        cin>>m;
        cin.ignore();

        while(m--)
        {
            getline(cin,str);

            if(mp[str]!="independent")
                Mp[str]++;
        }

        set<string>::iterator it;

        it=st.begin();

        while(it!=st.end())
        {
            v.push_back(Mp[*it]);
            MP[Mp[*it]]=*it;
            it++;
        }

        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());

        if(ind>v[0]) cout<<"independent";
        else if(v[0]==v[1]) cout<<"tie";
        else cout<<mp[MP[v[0]]];

        cout<<endl;

        if(test)
            cout<<endl;

        st.clear();
        v.clear();
        mp.clear();
        MP.clear();
        Mp.clear();
    }

    return 0;
}

