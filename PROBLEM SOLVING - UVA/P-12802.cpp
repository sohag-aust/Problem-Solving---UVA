#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long num;
    long long temp,rev,flag;
    while(cin>>num)
    {
        rev=0;
        flag=1;
        temp=num;
        while(temp!=0)
        {
            rev=rev*10;
            rev=rev+(temp%10);
            temp/=10;
        }
        if(rev==num && num>=10)
        {
            for(int i=2; i<=sqrt(num); i++)
            {
                if(num%i==0)
                {
                    flag=0;
                    break;
                }
                else
                    flag=1;
            }

            if(flag==1)
            {
                cout<<num*2<<endl;
                break;
            }
            else
                cout<<num*2<<endl;
        }
        else
            cout<<num*2<<endl;
    }
    return 0;
}

