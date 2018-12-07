#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll num,temp,temp1,res,res1,temp2;
    ll flag1,flag2,flag3,sum;
    while(cin>>num)
    {
        temp1=res=res1=sum=temp2=0;
        temp=num;
        flag1=1;
        flag2=1;
        for(ll i=2; i<=sqrt(num); i++)
        {
            if(num%i==0)
            {
                flag1=0; /// for not prime
                break;
            }
            else
                flag1=1; /// for prime
        }
        if(flag1==0)
            cout<<num<<" is not prime."<<endl;
        else
        {
            if(temp>9 && temp<=99)   /// num:1
            {
                temp1=10;
                while(temp!=0)
                {
                    res=temp%10;
                    res1=res*temp1;
                    sum+=res1;
                    res/=10;
                    temp1/=10;
                    temp/=10;
                }
                temp2=sum;
            }

            else if(temp>99 && temp<=999)    /// num:2
            {
                temp1=100;
                while(temp!=0)
                {
                    res=temp%10;
                    res1=res*temp1;
                    sum+=res1;
                    res/=10;
                    temp1/=10;
                    temp/=10;
                }
                temp2=sum;
            }

            else if(temp>999 && temp<=9999)    ///num:3
            {
                temp1=1000;
                while(temp!=0)
                {
                    res=temp%10;
                    res1=res*temp1;
                    sum+=res1;
                    res/=10;
                    temp1/=10;
                    temp/=10;
                }
                temp2=sum;
            }

            else if(temp>9999 && temp<=99999)      ///num:4
            {
                temp1=10000;
                while(temp!=0)
                {
                    res=temp%10;
                    res1=res*temp1;
                    sum+=res1;
                    res/=10;
                    temp1/=10;
                    temp/=10;
                }
                temp2=sum;
            }

            else if(temp>99999 && temp<=999999)     ///num:5
            {
                temp1=100000;
                while(temp!=0)
                {
                    res=temp%10;
                    res1=res*temp1;
                    sum+=res1;
                    res/=10;
                    temp1/=10;
                    temp/=10;
                }
                temp2=sum;
            }

            else if(temp>999999 && temp<=9999999)       ///num:6
            {
                temp1=1000000;
                while(temp!=0)
                {
                    res=temp%10;
                    res1=res*temp1;
                    sum+=res1;
                    res/=10;
                    temp1/=10;
                    temp/=10;
                }
                temp2=sum;
            }

            else  if(temp>9999999)         ///num:7
            {
                temp1=10000000;
                while(temp!=0)
                {
                    res=temp%10;
                    res1=res*temp1;
                    sum+=res1;
                    res/=10;
                    temp1/=10;
                    temp/=10;
                }
                temp2=sum;
            }
        }

        if(temp2==num)
            cout<<num<<" is prime."<<endl;

        else
        {
            for(ll j=2; j<=sqrt(temp2); j++)
            {
                if(temp2%j==0)
                {
                    flag2=0;
                    break;
                }
                else
                    flag2=1; /// for emirp
            }
            if(flag1==1 && flag2==1)
                cout<<num<<" is emirp."<<endl;
            else if(flag1==1)
                cout<<num<<" is prime."<<endl;
        }
    }
    return 0;
}

