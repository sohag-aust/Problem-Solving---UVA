#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        double a,b,c;
        cin>>a>>b>>c;
        double res=( ((c/(a+b))*a) + ((a-b)*(c/(a+b))) );
        cout<<res<<endl;
    }

    return 0;
}

