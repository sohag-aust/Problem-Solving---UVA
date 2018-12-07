#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int> >vec;
pair<int,int>p;
map<pair<int,int>,int>ans;

struct node
{
    int key;
    int index;
} ara[1000000];

int main()
{
    int test,cs=0;

    while(cin>>test)
    {
        memset(ara,0,sizeof(ara));

        if(!test) break;

        for(int i=0; i<test; i++)
        {
            int cnt = -1;
            int n;
            cin>>n;

            for(int j=1; j<=n; j++)
            {
                int num;
                cin>>num;

                ara[num].key = i;
                ara[num].index = ++cnt;

                p = make_pair(i,cnt);
                ans[p] = num;
            }
        }

        cout<<"Scenario #"<<++cs<<endl;
        string str;

        while(cin>>str)
        {
            if(str[0]=='E')
            {
                int value;
                cin>>value;

                int a = ara[value].key;
                int b = ara[value].index;

                int paici = a;
                bool visit = false;

                for(int i=vec.size()-1; i>=0; i--)
                {
                    if(paici == vec[i].first)
                    {
                        visit = true;

                        vec.insert(vec.begin()+i+1,make_pair(a,b));
                        break;
                    }
                }

                if(!visit)
                    vec.push_back(make_pair(a,b));
            }

            else if(str[0]=='D')
            {
                int a = vec[0].first;
                int b = vec[0].second;

                vec.erase(vec.begin());

                p = make_pair(a,b);
                cout<<ans[p]<<endl;
            }

            else break;
        }

        cout<<endl;

        vec.clear();
        ans.clear();
    }

    return 0;
}

