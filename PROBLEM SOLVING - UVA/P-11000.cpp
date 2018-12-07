#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    long long int a,b,c;
    long long int d,e,f;
    long long int num;
    long long int sum,sum1;
    while(cin>>num)
    {
        a=0;
        b=1;
        c=0;
        d=0;
        e=1;
        f=0;
        sum=0;
        sum1=0;

        if(num==-1)
            break;
        if(num==0)
            cout<<"0 1"<<endl;
        else
        {
            for(int i=1; i<num; i++)
            {
                c=a+b;
                sum+=c;
                a=b;
                b=c;
            }
            for(int i=1; i<=num; i++)
            {
                f=d+e;
                sum1+=f;
                d=e;
                e=f;
            }
            cout<<sum+1<<" ";
            cout<<sum1+1<<endl;
        }
    }
    return 0;
}

