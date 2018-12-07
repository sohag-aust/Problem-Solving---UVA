#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll test,res;
    cin>>test;
    while(test--)
    {
        res=0;
        ll a,b;
        cin>>a>>b;
        res=(a/3)*(b/3);
        cout<<res<<endl;
    }
    return 0;
}


