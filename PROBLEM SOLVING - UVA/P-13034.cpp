#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[10000];
    int test,flag,k=0;
    int i,j;

    cin>>test;
    while(test--)
    {
        flag=1;
        for(i=0; i<13; i++)
            cin>>ara[i];
        for(i=0; i<13; i++)
        {
            if(ara[i]==0)
            {
                flag=0;
                break;
            }

        }
        if(flag==0)
            cout<<"Set #"<<++k<<": "<<"No"<<endl;
        else
            cout<<"Set #"<<++k<<": "<<"Yes"<<endl;
    }
    return 0;
}


