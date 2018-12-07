#include<bits/stdc++.h>
using namespace std;

const int maxi=2010;
map<int,bool>mp;

void seive(int maxi)
{
    mp[0]=mp[1]=true;
    for(int i=2; i*i<=maxi; i++)
    {
        if(!mp[i])
        {
            for(int j=2*i; j<=maxi; j+=i)
                mp[j]=true;
        }
    }
}

int main()
{
    mp.clear();
    seive(maxi);
    int test;
    cin>>test;
    cin.ignore();
    while(test--)
    {
        map<char,bool>visit;
        map<char,int>ans;
        vector<char>v;
        string str;
        cin>>str;

        for(int i=0; i<str.size(); i++)
        {
            ans[str[i]]++;
            if(!visit[str[i]])
            {
                v.push_back(str[i]);
                visit[str[i]]=true;
            }
        }

        set<char>st;
        set<char>::iterator it;

        for(int i=0; i<v.size(); i++)
        {
            if(!mp[ans[v[i]]])
                st.insert(v[i]);
        }

        it=st.begin();

        static int cs=0;
        cout<<"Case "<<++cs<<": ";

        if(st.size()==0) cout<<"empty";
        else
        {
            while(it!=st.end())
            {
                cout<<*it;
                it++;
            }
        }

        cout<<endl;
    }

    return 0;
}
