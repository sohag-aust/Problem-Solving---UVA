#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,res;
    cin>>test;
    while(test--)
    {
        int l,u;
        cin>>l>>u;
        int maxi=0;

        for(int i=l; i<=u; i++)
        {
            int n=i;
            vector<int>div;

            for(int j=1; j<=(int)sqrt(n); j++)
            {
                if(n%j==0)
                {
                    div.push_back(j);

                    if(j!=sqrt(n))
                        div.push_back(n/j);
                }
            }

            int si=div.size();
            if(si>maxi)
            {
                maxi=si;
                res=n;
            }
        }

        cout<<"Between "<<l<<" and "<<u<<", "<<res<<" has a maximum of "<<maxi<<" divisors.";
        puts("");
    }

    return 0;
}

