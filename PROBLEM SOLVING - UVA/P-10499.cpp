#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    long long int res;

    while(cin>>n)
    {
        if(n<0)
            break;

        if(n==1)
            cout<<"0%"<<endl;
        else
        {
            res = n * 25;
            cout<<res<<"%"<<endl;;
        }
    }

    return 0;
}


