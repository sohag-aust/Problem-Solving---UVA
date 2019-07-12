#include<bits/stdc++.h>
using namespace std;

struct node
{
    char value;
    int ascii_value;
    int count_value;
}n;

int visit[256];
map<char,int>mp;
vector<node>v;

bool cmp(node a, node b)
{
    if(a.count_value == b.count_value) return a.ascii_value > b.ascii_value;
    return a.count_value < b.count_value;
}

int main()
{
    string str;
    bool blank = false;
    while(getline(cin,str))
    {
        mp.clear();
        v.clear();
        memset(visit,0,sizeof(visit));

        if(blank)
            cout<<endl;

        for(int i=0;i<str.size();i++)
            mp[str[i]]++;

        for(int i=0;i<str.size();i++)
        {
            int ascii = (int)str[i];

            if(!visit[ascii])
            {
                visit[ascii] = 1;
                n.value = str[i];
                n.ascii_value = ascii;
                n.count_value = mp[str[i]];
                v.push_back(n);
            }
        }

        sort(v.begin(),v.end(),cmp);

        for(int i=0;i<v.size();i++)
            cout<<v[i].ascii_value<<" "<<v[i].count_value<<endl;

        blank = true;
    }

    return 0;
}
