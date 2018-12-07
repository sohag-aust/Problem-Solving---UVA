#include<stdio.h>
int main(void)
{
    int num,i,j;
    int ara[100];
    int test;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        scanf("%d",&num);
        for(j=0;j<num;j++)
        {
            scanf("%d",&ara[j]);
        }
        for(j=0;j<num;j++)
        {
            j=num/2;
            //j=j+1;
            printf("Case %d: %d",i,ara[j]);
            break;
        }
        printf("\n");
    }
    return 0;
}

