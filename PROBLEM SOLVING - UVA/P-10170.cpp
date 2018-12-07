
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int a,b,sum;
    while(cin>>a>>b)
    {
        sum=0;
        while(1)
        {
            sum+=a;
            if(sum>=b)
                break;
            a++;
        }
        cout<<a<<endl;
    }
    return 0;
}

