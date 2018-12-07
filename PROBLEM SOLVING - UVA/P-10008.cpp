#include<bits/stdc++.h>
using namespace std;

struct node
{
    char ch;
    int val;
}edge;

vector<node>v;

bool cmp(node a,node b)
{
    if(a.val==b.val) return a.ch<b.ch;
    return a.val>b.val;
}

int main()
{
    int test;
    cin>>test;
    string str;
    set<char>st;
    map<char,int>mp;

    cin.ignore();

    while(test--)
    {
        getline(cin,str);

        for(int i=0; i<str.size(); i++)
        {
            if(isalpha(str[i])) str[i]=(char)toupper(str[i]);
        }

        for(int i=0;i<str.size();i++)
        {
            mp[str[i]]++;
            st.insert(str[i]);
        }
    }

    set<char>::iterator it=st.begin();
    while(it!=st.end())
    {
        if(isalpha(*it))
        {
            edge.ch=*it;
            edge.val=mp[*it];
            v.push_back(edge);
        }

        it++;
    }

    sort(v.begin(),v.end(),cmp);

    for(int i=0;i<v.size();i++)
        cout<<v[i].ch<<" "<<v[i].val<<endl;

    return 0;
}
