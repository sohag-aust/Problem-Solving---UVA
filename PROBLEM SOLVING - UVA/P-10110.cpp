/**
toggle case check korar jonne back and forth jodi switch on off korte hoi then odd songkhai jonno sqrt(n) ei sutro,
use korbo...
and long long int and double 2 ta prai ak e rokom jinis dharon korte pare..

1st test case n = 3
the number factor of 3 is two : 1 and 3
so the last bulb will toggle two times

initially the bulb was OFF

After the 1st toggle the bulb ON
After the 2nd toggle the bulb OFF

factor means for 3:: 3 is divisible by 1 and 3 so option is 2 : 1 and 3..
*/

#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    long long int num;
    double num1;
    while(scanf("%ld",&num)!=EOF)
    {
        if(num==0)
            break;
        else
        {
            num1=sqrt(num);
            num=sqrt(num);
            if(num==num1)
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
        }
    }
    return 0;
}

