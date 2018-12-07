#include<bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;

int main()
{
    ll res;
    ll test;
    cin>>test;
    ll num,sum;

    while(test--)
    {
        sum=0;
        res=4;

        cin>>num;

        if(num==1)
            cout<<"1"<<endl;
        else
        {
            for(int i=2; i<=num; i++)
            {
                sum+=res;
                res*=2;
            }
            cout<<sum<<endl;
        }
    }

    EXIT_SUCCESS;
}


