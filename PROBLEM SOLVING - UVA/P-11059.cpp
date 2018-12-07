#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    int ara[20];

    while(cin>>test)
    {
        static int cs = 1;

        for(int i=0;i<test;i++)
            cin>>ara[i];

        long long mul;
        long long maxi = 0;

        for(int i=0;i<test;i++)
        {
            mul = ara[i];
            maxi = max(mul,maxi);

            for(int j=i+1;j<test;j++)
            {
                mul *= ara[j];
                maxi = max(maxi,mul);

                if(mul == 0) break;
            }
        }

        cout<<"Case #"<<cs++<<": The maximum product is "<<maxi<<"."<<endl;
        cout<<endl;
    }

    return 0;
}

