#include<bits/stdc++.h>
using namespace std;

struct node
{
    string _name,_lower;
    int _time;

    node(string n,string l,int t)
    {
        _name = n;
        _lower = l;
        _time = t;
    }
};

bool cmp(node a,node b)
{
    if(a._time == b._time) return a._lower < b._lower;
    return a._time < b._time;
}

int main()
{
    string name,dot,minu,sec,ms;
    int minu1,sec1,ms1,n;

    while(cin>>n)
    {
        vector<node>v;

        for(int i=1; i<=n; i++)
        {
            cin>>name>>dot>>minu1>>minu>>sec1>>sec>>ms1>>ms;

            sec1 = (minu1 * 60) + sec1;
            ms1 = (sec1 * 1000) + ms1;

            string temp = "";

            for(int i=0; i<name.size(); i++) temp += (char)tolower(name[i]);

            v.push_back(node(name,temp,ms1));
        }

        sort(v.begin(),v.end(),cmp);
        int row = 0;

        for(int i=0; i<v.size(); i++)
        {
            int diff = (v.size() - i);
            cout<<"Row "<<++row<<endl;

            if(diff >= 2)
            {
                cout<<v[i]._name<<endl;
                cout<<v[++i]._name<<endl;
            }

            else
                cout<<v[i]._name<<endl;
        }

        cout<<endl;
        cin.ignore();
    }

    return 0;
}
