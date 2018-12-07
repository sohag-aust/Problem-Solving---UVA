#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int h1,m1,h2,m2;
    int sum1,sum2,sum;
    while(cin>>h1>>m1>>h2>>m2)
    {
        if(h1==0 && h2==0 && m1==0 && m2==0)
            break;
        else
        {
            sum1=(h1*60)+m1;
            sum2=(h2*60)+m2;
            if(sum2<=sum1)
            {
                sum=(sum2+1440)-sum1;
                cout<<sum<<endl;
            }
            else
            {
                sum=sum2-sum1;
                cout<<sum<<endl;
            }
        }
    }
    return 0;
}

