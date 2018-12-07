#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int num;
    int ara[100];
    int sum,sum1,avrg,res;
    int k=0;
    while(cin>>num)
    {
        sum=0;
        sum1=0;
        if(num==0)
            break;
        for(int i=0;i<num;i++)
            cin>>ara[i];
        for(int i=0;i<num;i++)
        {
            sum+=ara[i];
        }
        avrg=sum/num;
        for(int i=0;i<num;i++)
        {
            if(avrg>ara[i])
            {
                res=avrg-ara[i];
                sum1+=res;
            }
        }
        cout<<"Set #"<<++k<<endl;
        cout<<"The minimum number of moves is "<<sum1<<".\n"<<endl;
    }
    return 0;
}

