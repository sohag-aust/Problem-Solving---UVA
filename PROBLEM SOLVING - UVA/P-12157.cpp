#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test;
    int i,j;
    int num;
    int a;
    int m,ju;
    int sum_m,sum_j;
    cin>>test;
    int k=0;
    while(test--)
    {
        sum_m=0;
        sum_j=0;
        cin>>num;
        while(num--)
        {
            m=0;
            ju=0;
            cin>>a;
            for(i=0; i<=a; i+=29) ///for mile..
            {
                m+=10;
                i++;
            }
            sum_m+=m;
            for(j=0; j<=a; j+=59) ///for juice..
            {
                ju+=15;
                j++;
            }
            sum_j+=ju;
        }

        if(sum_m>sum_j)
            cout<<"Case "<<++k<<": Juice "<<sum_j<<endl;
        else if(sum_m<sum_j)
            cout<<"Case "<<++k<<": Mile "<<sum_m<<endl;
        else
            cout<<"Case "<<++k<<": Mile Juice "<<sum_j<<endl;
    }
    return 0;
}

