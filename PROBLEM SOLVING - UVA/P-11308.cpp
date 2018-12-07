#include<bits/stdc++.h>
using namespace std;

struct node
{
    string binder;
    int cost;

    node(string _b,int _c)
    {
        binder = _b;
        cost = _c;
    }
};

map<string,int>mp;
vector<node>v;

bool cmp(node a,node b)
{
    if(a.cost == b.cost) return a.binder < b.binder;
    return a.cost < b.cost;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int test;

    cin>>test;
    cin.ignore();

    while(test--)
    {
        string title;
        getline(cin,title);

        for(int i=0; i<title.size(); i++)
        {
            if(isalpha(title[i]))
                title[i] = toupper(title[i]);
        }

        int m,n,budget;
        cin>>m>>n>>budget;

        cin.ignore();

        while(m--)
        {
            string ingre;
            int price;

            cin>>ingre>>price;
            mp[ingre] = price;
        }

        cin.ignore();

        while(n--)
        {
            string str;
            int k,money = 0;

            getline(cin,str);
            cin>>k;

            cin.ignore();

            while(k--)
            {
                string gredient;
                int unit;

                cin>>gredient>>unit;
                money += (mp[gredient] * unit);
            }

            v.push_back(node(str,money));
            cin.ignore();
        }

        sort(v.begin(),v.end(),cmp);
        int flag = 0;

        cout<<title<<endl;

        for(int i=0; i<v.size(); i++)
        {
            if(v[i].cost <= budget)
            {
                cout<<v[i].binder<<endl;
                flag = 1;
            }
        }

        if(!flag)
            cout<<"Too expensive!"<<endl;

        cout<<endl;

        mp.clear();
        v.clear();
    }

    return 0;
}

