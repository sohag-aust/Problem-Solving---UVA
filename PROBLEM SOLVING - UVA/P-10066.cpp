#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2,cs=0;
    while(cin>>n1>>n2)
    {
        if(!n1 && !n2) break;

        int an1[n1+2];
        int an2[n2+2];
        int ara[n1+n2][n1+n2];

        for(int i=0; i<n1; i++) cin>>an1[i];
        for(int i=0; i<n2; i++) cin>>an2[i];

        cout<<"Twin Towers #"<<++cs<<endl;

        for(int i=0;i<=n1;i++)
        {
            for(int j=0;j<=n2;j++)
            {
                if(i==0 || j==0)
                    ara[i][j]=0;

                else if(an1[i-1]==an2[j-1])
                    ara[i][j]=(ara[i-1][j-1])+1;

                else
                {
                    ara[i][j]=max(ara[i-1][j],ara[i][j-1]);
                }
            }
        }

        cout<<"Number of Tiles : "<<ara[n1][n2]<<endl;

        //memset(ara,0,sizeof(ara)*n1*n2);
        cout<<endl;
    }

    return 0;
}
