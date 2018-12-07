#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test;
    int a[10000];
    int b[10000];
    int k=0;
    cin>>test;
    while(test--)
    {
        int flag=1;
        int sum1=0;
        int n,l;
        cin>>n>>l;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(int j=0; j<n; j++)
        {
            cin>>b[j];
        }

        for(int i=0; i<n; i++)
        {
            sum1+=a[i];
        }
        if(sum1>l)
        {
            flag=0;
        }
        else
        {
            for(int i=0,j=0; i<n; i++,j++)
            {
                if(a[i]>b[j])
                {
                    flag=0;
                    break;
                }
                else
                    flag=1;
            }
        }
        if(flag==1)
            cout<<"Case "<<++k<<": "<<"Yes"<<endl;
        else
            cout<<"Case "<<++k<<": "<<"No"<<endl;
    }
    return 0;
}

