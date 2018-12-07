#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll n,m,val,close,sum,diff,mini;
    ll a[1010],cs=0;

    while(cin>>n)
    {
        if(!n)
            break;

        for(int i=0; i<n; i++)
            cin>>a[i];

        cin>>m;

        cout<<"Case "<<++cs<<":"<<endl;

        while(m--)
        {
            sum=0;
            mini=1e9;

            cin>>val;

            for(int i=0; i<n; i++)
            {
                for(int j=i+1; j<n; j++)
                {
                    sum=a[i]+a[j];
                    diff=abs(val-sum);

                    if(diff<=mini)
                    {
                        mini=diff;
                        close=sum;
                    }
                }
            }

            cout<<"Closest sum to "<<val<<" is "<<close<<"."<<endl;
        }
    }

    return 0;
}

