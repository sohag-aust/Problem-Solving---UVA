#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num;
    long long int a,b,c;
    while(cin>>num)
    {
        if(num==0)
            break;
        a=0;
        b=1;

        for(int i=1;i<=num;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        cout<<c<<endl;
    }
    return 0;
}

