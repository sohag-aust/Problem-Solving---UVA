#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    long long int num;
    long long int flag;
    long long int sum,j;
    while(cin>>num)
    {
        sum=0;
        if(num==0)
            break;

        flag=1;

        for(int i=2; i<=num/2; i++)
        {
            if(num%i==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            long long int a=num-1;
            long long int b=pow(2,num);
            long long int c=pow(2,a);
            long long int res=(b-1)*c;

            if(num==11 || num==23 || num==29)
                cout<<"Given number is prime. But, NO perfect number is available."<<endl;
            else
                cout<<"Perfect: "<<res<<"!"<<endl;
        }
        else
            cout<<"Given number is NOT prime! NO perfect number is available."<<endl;
    }
    return 0;
}

