#include<stdio.h>
int main(void)
{
    int ara[1000],i,num;
    int sum,test,count;
    float avrg,result;

    scanf("%d",&test);
    while(test--)
    {
        sum=0;
        count=0;
        scanf("%d",&num);
        for(i=0; i<num; i++)
        {
            scanf("%d",&ara[i]);
        }

        for(i=0; i<num; i++)
        {
            sum+=ara[i];
        }
        avrg=sum/num;
        for(i=0; i<num; i++)
        {
            if(ara[i]>avrg)
            {
                count++;
            }
        }
        result=(float)count/(float)num;
        result*=100;
        printf("%.3f%%\n",result);
    }
    return 0;
}
