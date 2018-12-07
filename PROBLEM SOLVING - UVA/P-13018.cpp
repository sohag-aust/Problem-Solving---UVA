#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,m;
    int k=0;
    while(cin>>n>>m)
    {
        if(k++>=1)
            cout<<endl;
        if(n>=m)
        {
            for(int i=m; i<=n; i++)
                cout<<i+1<<endl;
        }
        else if(m>n)
        {
            for(int i=n; i<=m; i++)
                cout<<i+1<<endl;
        }
    }
    return 0;
}

