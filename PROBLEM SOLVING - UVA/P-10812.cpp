#include<stdio.h>
int main(void)
{
    long long int a,b;
    long long int dif,div,show;
    long long int test,sum,chk;
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lld %lld",&a,&b);
        sum=a+b;
        div=sum/2;
        dif=div-b;
        chk=(a-b)%2;

        if(a<b || chk!=0)
        {
            printf("impossible\n");
        }
        else
        {
            printf("%lld %lld\n",div,dif);
        }
    }
    return 0;
}

