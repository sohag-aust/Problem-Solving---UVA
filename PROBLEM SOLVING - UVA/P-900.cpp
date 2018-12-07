#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    long long int num;
    long long int a;
    long long int b,c;
    while(cin>>num)
    {
        a=0;
        b=1;
        if(num==0)
            break;
        for(int i=1; i<=num; i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        cout<<c<<endl;

    }
    return 0;
}

