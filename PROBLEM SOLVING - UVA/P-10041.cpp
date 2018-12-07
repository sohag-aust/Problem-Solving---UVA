#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int n;
        cin>>n;
        int ara[n+2];

        for(int i=0;i<n;i++) cin>>ara[i];
        sort(ara,ara+n);
        int v=n/2;
        int sum=0;
        for(int i=v-1;i>=0;i--)
            sum+=abs(ara[v]-ara[i]);
        for(int i=v+1;i<n;i++)
            sum+=abs(ara[v]-ara[i]);

        cout<<sum<<endl;
    }
    return 0;
}

