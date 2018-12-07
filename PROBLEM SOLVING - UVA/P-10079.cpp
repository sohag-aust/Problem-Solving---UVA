/**
1 theke n porjonto songkhar jogfol nirnoi er suto: (n*(n+1))/2;;;
*/

#include<iostream>
using namespace std;
int main(void)
{
    long long int num,sum;
    while(cin>>num)
    {
        if(num<0)
            break;
        else
        {
            sum=0;
            for(int i=num; i>=1; i--)
            {
                sum+=i;
            }
            cout<<sum+1<<endl;
        }
    }
    return 0;
}
