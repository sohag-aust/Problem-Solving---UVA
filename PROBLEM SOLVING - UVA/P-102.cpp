#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<string>v;
vector<int>vec;
map<int,pair<int,int> >mp;
map<char,int>mp1;
int mat[10][10];

struct node
{
    string ss;
    int vv;

    node(string s1,int v1)
    {
        ss = s1;
        vv = v1;
    }
};

bool cmp(node a,node b)
{
    if(a.vv == b.vv) return a.ss < b.ss;
    return a.vv < b.vv;
}

void init()
{
    mp[0] = {1,2}, mp[1] = {0,2}, mp[2] = {0,1};
    mp1['B'] = 0, mp1['G'] = 1, mp1['C'] = 2;
    string str = "BGC";

    sort(str.begin(),str.begin() + str.size());

    do
    {
        v.push_back(str);
    }
    while(next_permutation(str.begin(),str.begin() + str.size()));
}

int main()
{
    init();

    int n;

    while(cin>>n)
    {
        memset(mat,0,sizeof(mat));
        vector<node>ans;
        ll sum = 0;
        ans.clear();
        vec.clear();

        vec.push_back(n);

        for(int i=1; i<=8; i++)
        {
            cin>>n;
            vec.push_back(n);
        }

        int ind = 0;

        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                mat[i][j] = vec[ind++];
            }
        }

        for(int i=0; i<v.size(); i++)
        {
            string s = v[i];
            sum = 0;

            for(int j=0; j<s.size(); j++)
            {
                char c = s[j];
                int k = mp1[c];

                sum += (mat[j][mp[k].first] + mat[j][mp[k].second]);
            }

            ans.push_back(node(s,sum));
        }

        sort(ans.begin(),ans.end(),cmp);

        cout<<ans[0].ss<<" "<<ans[0].vv<<endl;
    }

    return 0;
}

