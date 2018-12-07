#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int a,b;
    int i,j;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        while(b--)
        {
            for(i=1; i<=a; i++)
            {
                for(j=1; j<=i; j++)
                {
                    cout<<i;
                }
                cout<<endl;
            }
            for(i=a-1; i>=1; i--)
            {
                for(j=i; j>=1; j--)
                {
                    cout<<i;
                }
                cout<<endl;
            }
            if(b!=0)
                cout<<endl;
        }
        if(t!=0)
            cout<<endl;
    }
    return 0;
}


