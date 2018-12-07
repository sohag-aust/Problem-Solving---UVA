#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test,i,j;
    int flag;
    cin>>test;
    cout<<"Lumberjacks:"<<endl;
    while(test--)
    {
        flag=1;
        int ara[10000];
        for(i=0; i<10; i++)
            cin>>ara[i];

        if(ara[0]<ara[1])
        {
            for(i=1,j=i+1; j<10; i++,j++)
            {
                if(ara[i]<ara[j])
                {
                    flag==1;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
        }
        else if(ara[0]>ara[1])
        {
            for(i=1,j=i+1; j<10; i++,j++)
            {
                if(ara[i]>ara[j])
                {
                    flag==1;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
        }
        if(flag==1)
            cout<<"Ordered"<<endl;
        else if(flag==0)
            cout<<"Unordered"<<endl;
    }
    return 0;
}

