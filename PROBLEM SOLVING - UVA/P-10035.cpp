
#include<bits/stdc++.h>
#define mod %10
#define div /10
typedef unsigned long long ll;
using namespace std;

ll a,b;
ll num1,num2;
ll sum,cnt,carry;

int main()
{
    while(cin>>a>>b)
    {
        if(!a && !b)
            break;

        sum=carry=cnt=0;

        while(a || b)
        {
            num1=a mod;
            num2=b mod;

            sum=num1+num2+carry;

            if(sum>9)
            {
                cnt++;
                carry=1;
            }
            else
                carry=0;

            a=a div;
            b=b div;
        }

        //cout<<cnt<<endl;
        if(cnt==0)
            cout<<"No carry operation."<<endl;
        else if(cnt==1)
            cout<<cnt<<" carry operation."<<endl;
        else
            cout<<cnt<<" carry operations."<<endl;
    }

    EXIT_SUCCESS;
}

