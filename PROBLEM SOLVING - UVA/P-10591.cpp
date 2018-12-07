#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,num,flag,temp1;
    int temp,res,sum,sum1,k=0;

    cin>>test;
    while(test--)
    {
        sum=0;
        sum1=0;
        flag=0;
        cin>>num;
        if(num<=9)
        {
            temp=num;
            temp1=temp*temp;
        }
        else
        {
            temp=num;
            temp1=temp;
        }

        while(1)
        {
            while(temp1!=0)
            {
                res=temp1%10;
                sum1+=res*res;
                sum+=res;
                temp1/=10;
            }
            temp1=sum1;
            flag=temp1;
            sum=0;
            sum1=0;

            if(temp1<9)
            {
                break;
            }
        }
        if(flag==1)
            cout<<"Case #"<<++k<<": "<<num<<" is a Happy number."<<endl;
        else
            cout<<"Case #"<<++k<<": "<<num<<" is an Unhappy number."<<endl;
    }
    return 0;
}

