#include<bits/stdc++.h>
using namespace std;

struct node
{
    int a,b,diff;
} st;

bool cmp(node a,node b)
{
    return a.diff > b.diff;
}

int main()
{
    int n,g;
    while(cin>>n>>g)
    {
        vector<node>v;

        while(n--)
        {
            cin>>st.a>>st.b;
            st.diff = st.a - st.b;
            v.push_back(st);
        }

        sort(v.begin(),v.end(),cmp);

        int point = 0;

        for(int i=0; i<v.size(); i++)
        {
            if(v[i].diff > 0) point += 3;

            else if(v[i].diff == 0)
            {
                if(g>0)
                {
                    g -= 1;
                    point += 3;
                }

                else point += 1;
            }

            else
            {
                if(g > (v[i].diff * (-1)))
                {
                    point += 3;
                    g -= ((-1)*v[i].diff) + 1;
                }

                else if(g == (v[i].diff * (-1)))
                {
                    point += 1;
                    g -= 1;
                }
            }
        }

        cout<<point<<endl;
    }

    return 0;
}

