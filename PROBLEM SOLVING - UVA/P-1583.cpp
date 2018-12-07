/**
it's an easy implement based problem.just follow the statement carefully.
you need to process 100 number back to the given number to get desired result.
for example if n=2005 then you have to check 2005-100=1905 to 2004 to get the generator of 2005.
there's a constraint and which is if n is less than 100 then you have to go to n/2 to n-1 to get the generator,
and if can't be found just print 0.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int n;
        cin>>n;

        int temp = n;
        int flag = 0;

        if(temp>100)
            temp = temp-100;

        else
            temp = temp/2;

        for(int i=temp; i<n; i++)
        {
            int val = i;
            int sum = i;

            while(val>0)
            {
                int mod = val%10;
                sum+=mod;
                val/=10;
            }

            if(sum == n)
            {
                flag = 1;
                cout<<i;
                break;
            }
        }

        if(!flag) cout<<0;
        cout<<endl;
    }

    return 0;
}
