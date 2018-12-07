#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll a,b;

    while(cin>>a>>b)
    {
        if(a>b)
            cout<<a-b<<endl;
        else
            cout<<b-a<<endl;
    }

    EXIT_SUCCESS;
}

