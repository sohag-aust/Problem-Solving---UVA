#include<bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;

ll ara[100000];
ll test;
ll num;
ll boy;
ll flag1,flag2;

int main()
{
    cin>>test;

    for(int i=0; i<test; i++)
        cin>>ara[i];

    cin>>num; /// how many shimpanjis

    while(num--)
    {
        flag1=0;
        flag2=0;

        cin>>boy;

        for(int i=test-1; i>=0; i--)  /// FINDING SMALLEST
        {
            if(boy>ara[i])
            {
                flag1=1;
                cout<<ara[i]<<" ";
                break;
            }

        }

        if(flag1==0)
            cout<<"X ";

        for(int i=0; i<test; i++) /// FINDING SMALLEST
        {
            if(boy<ara[i])
            {
                flag2=1;
                cout<<ara[i]<<endl;
                break;
            }
        }
        if(flag2==0)
            cout<<"X"<<endl;
    }

    return 0;
}

