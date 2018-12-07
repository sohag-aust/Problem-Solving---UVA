#include<bits/stdc++.h>
using namespace std;

#define maxi 110

int ara[maxi+5][maxi+5];

void init()
{
    for(int i=1;i<=maxi;i++)
    {
        for(int j=1;j<=maxi;j++)
        {
            ara[i][j] = INT_MAX;
        }
    }
}

int main()
{
    int c,s,q;
    bool blank = false;
    int cs = 0;

    while(cin>>c>>s>>q)
    {
        if(c==0 && s==0 && q==0) break;

        init();

        while(s--)
        {
            int node1,node2,weight;

            cin>>node1>>node2>>weight;

            ara[node1][node2] = weight;
            ara[node2][node1] = weight;
        }

        for(int k=1;k<=c;k++)
        {
            for(int i=1;i<=c;i++)
            {
                for(int j=1;j<=c;j++)
                {
                    ara[i][j] = min(ara[i][j],(max(ara[i][k],ara[k][j])));
                }
            }
        }

        if(blank) cout<<endl;
        blank = true;

        cout<<"Case #"<<++cs<<endl;

        while(q--)
        {
            int path1,path2;
            cin>>path1>>path2;

            if(ara[path1][path2] == INT_MAX) cout<<"no path";
            else cout<<ara[path1][path2];
            cout<<endl;
        }
    }

    return 0;
}

