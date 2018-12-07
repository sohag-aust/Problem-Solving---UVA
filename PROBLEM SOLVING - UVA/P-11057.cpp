#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    int ara[100000];
    int m;
    int diff[100000],mini;
    int i,j,k=0;
    int res1,res2;
    while(cin>>t)
    {
        res1=res2=0;

        for(i=0; i<t; i++)
            cin>>ara[i];

        cin>>m;
        sort(ara,ara+t);

        for(i=0; i<t; i++)
        {
            for(j=i+1; j<t; j++)
            {
                if(ara[i]+ara[j]==m)
                {
                    diff[++k]=ara[j]-ara[i];
                    mini=diff[1];

                    if(diff[k]<=mini)
                    {
                        mini=diff[k];
                        res1=ara[i];
                        res2=ara[j];
                    }
                }
            }
        }

        cout<<"Peter should buy books whose prices are "<<res1<<" and "<<res2<<".\n"<<endl;
        k=mini=0;
    }
    return 0;
}


