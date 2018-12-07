#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test;
    int N,K,X;
    int sum1;
    int i=0;
    cin>>test;
    while(test--)
    {
        sum1=0;
        cin>>N>>K>>X;
        int sum=(N*(N+1))/2;
        for(int i=1;i<=K;i++)
        {
            sum1+=X;
            X++;
        }
        cout<<"Case "<<++i<<": "<<sum-sum1<<endl;
    }
    return 0;
}

