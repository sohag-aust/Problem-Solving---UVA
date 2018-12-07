
#include<stdio.h>
int main(void)
{
    int t,a,b,c;
    int sum,res,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d",&a,&b,&c);

        if((a>=2&&a<=23) && (b>=1&&b<=a) && (c>=1&&c<=200))
        {
            sum=b+c;
            while(sum>a)
            {
                sum=sum-a;
            }
            printf("Case %d: %d\n",i,sum);
        }
        else
        {
            return 0;
        }
    }
    return 0;
}


