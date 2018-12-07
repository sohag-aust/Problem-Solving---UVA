
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    long long  num;
    while(cin>>num)
    {
        if(num<0)
            break;
        long long i=0;
        long long  ara[100010];
        if(num==0)
            cout<<"0";
        while(num!=0)
        {
            ara[++i]=num%3;
            num/=3;
        }
        for(long long j=i; j>0; j--)
            cout<<ara[j];
        cout<<endl;
    }
    return 0;
}
