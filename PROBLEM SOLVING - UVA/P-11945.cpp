#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    double ara[100000];
    int i,test,res_int,div,k=0;
    double sum,res,val;
    double div1;
    cin>>test;
    while(test--)
    {
        sum=0;
        for(i=0; i<12; i++)
            cin>>ara[i];
        for(i=0; i<12; i++)
            sum+=ara[i];

        res=sum/12;

        if(res>999)
        {
            div=res/1000;
            div1=res/1000;
            div1=div1-div;

            if(div1<.01)
                printf("%d $%d,00%.2lf\n",++k,div,res-(div*1000));

            else if(div1<.1)
                printf("%d $%d,0%.2lf\n",++k,div,res-(div*1000));

            else
                printf("%d $%d,%.2lf\n",++k,div,res-(div*1000));
        }

        else
            printf("%d $%.2lf\n",++k,res);
    }
    return 0;
}

