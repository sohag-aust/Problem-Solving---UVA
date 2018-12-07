#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test,num;
    int ara[100000];
    cin>>test;
    while(test--)
    {
        int sum=0;
        cin>>num;
        for(int i=0; i<num; i++)
            cin>>ara[i];
        sort(ara,ara+num);
        for(int i=num-3; i>=0; i-=3)
            sum+=ara[i];

        cout<<sum<<endl;
    }
    return 0;
}

