#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,m;
    int ara[10000];
    while(cin>>n>>m)
    {
        int flag=0;
        int cnt=0;
        while(n--)
        {
            for(int i=0; i<m; i++)
                cin>>ara[i];
            for(int i=0; i<m; i++)
            {
                if(ara[i]>0)
                    flag=1;
                else
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
