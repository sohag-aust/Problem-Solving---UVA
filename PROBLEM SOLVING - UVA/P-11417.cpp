#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a,ll b);

int main()
{
    ll num,i,j,sum;
    while(cin>>num)
    {
        sum=0;
        if(num==0)
            break;
        for( i=1; i<num; i++)
        {
            for( j=i+1; j<=num; j++)
                sum+=gcd(i,j);
        }
        cout<<sum<<endl;
    }
    return 0;
}
ll gcd(ll a, ll b)
{
    if(b==0)
        return a;

    else
        return gcd(b,a%b);
}


