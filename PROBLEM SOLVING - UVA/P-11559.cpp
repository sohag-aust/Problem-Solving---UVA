#include<bits/stdc++.h>
using namespace std;

int N,B,H,W,P,A;
int ara[1000];
int brr[1000];
int k,res;

int main()
{
    while(cin>>N>>B>>H>>W)
    {
        k=0;
        while(H--)
        {
            cin>>P;
            for(int i=0; i<W; i++)
                cin>>ara[i];

            for(int i=0; i<W; i++)
            {
                if(N>ara[i])
                    continue;

                else
                {
                    res=N*P;

                    if(res<=B)
                        brr[k++]=res;
                }
            }
        }

        sort(brr,brr+k);

        if(brr[0]<=B && brr[0]!=0)
            cout<<brr[0]<<endl;

        else
            cout<<"stay home"<<endl;

        memset(brr,0,sizeof(brr));

    }
    return 0;
}

