#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    long long num,sum,i;
    while(scanf("%lld",&num)!=EOF)
    {
        sum=((num*num)*(num+1)*(num+1))/4;
        printf("%.lld\n",sum);
    }
    return 0;
}

