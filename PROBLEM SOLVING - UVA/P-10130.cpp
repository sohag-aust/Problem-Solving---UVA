#include<bits/stdc++.h>
using namespace std;

int cost[1002];
int weight[1002];
int mw[102];
int ara[1002][1002];

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int item,sum=0;
        cin>>item;

        for(int i=0; i<item; i++) cin>>cost[i]>>weight[i];

        int g;
        cin>>g;

        for(int i=0; i<g; i++) cin>>mw[i];

        for(int k=0; k<g; k++)
        {
            int w=mw[k];

            for(int i=0; i<=item; i++)
            {
                for(int j=0; j<=w; j++)
                    if(!i||!j) ara[i][j]=0;
            }

            int k1=0;

            for(int i=1; i<=item; i++,k1++)
            {
                for(int j=1; j<=w; j++)
                {
                    int val1=0;

                    if(j>=weight[i-1])
                    {
                        val1=cost[k1]+ara[i-1][j-weight[i-1]];
                    }

                    int val2=ara[i-1][j];

                    ara[i][j]=max(val1,val2);
                }
            }

            sum+=ara[item][w];

            memset(ara, 0, sizeof(ara[0][0]) * item * w);
        }

        cout<<sum<<endl;
    }
}

