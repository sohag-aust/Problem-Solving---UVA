#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll part1,part2,part3,part4,res;
ll a,b,c;

ll mod(ll a, ll b, ll c)
{
    if(b==0)
        return 1;

    else if(b%2==1)
    {
        part1=a%c;
        part2=mod(a,b-1,c);
        part3=(part1*part2)%c;
        return part3;
    }

    else if(b%2==0)
    {
        part4=mod(a,b/2,c);
        return (part4*part4)%c;
    }

}

int main()
{
    while(cin>>a>>b>>c)
    {
        res=mod(a,b,c);
        cout<<res<<endl;
    }
    return 0;
}

