#include<stdio.h>
#include<math.h>
int main(void)
{
    int digit1,digit,num,b,c,ara[100],i,count=0,found,j,test;
    double a,sum;
    scanf("%d",&test);
    while(test--)
    {
        found=0;
        sum=0.0;
        scanf("%d",&digit1);
        digit=digit1;
        int digit2=digit1;
        for(j=0; digit2!=0; j++)
        {
            num = digit2%10;
            if(num>=0 || num<=9)
                found++;
            digit2 = digit2/10;

        }

        for(i=0; digit!=0; i++)
        {
            num = digit%10;
            digit = digit/10;
            ara[i] = num;
            a = pow((double)ara[i],(double)found);
            sum+=a;
        }
        if(sum==digit1)
        {
            printf("Armstrong\n");
        }
        else if(sum!=digit1)
        {
            printf("Not Armstrong\n");
        }
    }
    return 0;
}
