#include<bits/stdc++.h>
using namespace std;
int main()

{
    int test;
    int a,b;
    cin>>test;
    while(test--)
    {
        cin>>a>>b;
        if(b%a==0)
            cout<<a<<" "<<b<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}


