#include<bits/stdc++.h>
using namespace std;
long long fact(long long n)
{
    long long f;
    if(n==1)
        return 1;
    else
    {
        f=n*fact(n-1);
        return f;
    }
}
int main(void)
{
    long long num;
    while(cin>>num)
    {
        if(num<0 && num%2!=0)
            cout<<"Overflow!"<<endl;
        else if(num<0 && num%2==0)
            cout<<"Underflow!"<<endl;
        else if(num>=0 && num<=7)
            cout<<"Underflow!"<<endl;
        else if(num>13)
            cout<<"Overflow!"<<endl;
        else
        {
            long long res=fact(num);
            cout<<res<<endl;
        }
    }
    return 0;
}

