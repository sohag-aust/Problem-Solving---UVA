#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    long long int test;
    long long int m,w,ara[100000];
    cin>>test;
    while(test--)
    {
        long long int sum=0;
        int cnt=0;
        cin>>m>>w;
        for(int i=0; i<m; i++)
        {
            cin>>ara[i];
        }
        sort(ara,ara+m);
        for(int i=0; i<m; i++)
        {
            sum+=ara[i];
            if(sum<=w)
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}

