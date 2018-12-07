#include<stdio.h>
int main(void)
{
    float a,b,c,w,sum;
    int count=0,test;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%f %f %f %f",&a,&b,&c,&w);
        sum=a+b+c;

        if(w>7)
            printf("0\n");
        else if(a<=56 && b<=45 && c<=25)
        {
            if(sum<=126)
            {
                printf("1\n");
                count++;
            }
            else
                printf("0\n");
        }
        else
        {
            if(sum>125)
                printf("0\n");
            else
            {
                printf("1\n");
                count++;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}

