#include<stdio.h>
int main(void)
{
    int t,a,b,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            printf(">\n");
        }
        else if(a<b)
        {
            printf("<\n");
        }
        else if(a==b)
        {
            printf("=\n");
        }
    }
    return 0;
}

