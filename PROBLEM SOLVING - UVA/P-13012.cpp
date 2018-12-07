#include<stdio.h>
int main()
{
    int t,num,i;
    int ara[100];
    while(scanf("%d",&t)!=EOF)
    {
        num=0;
        for(i=0; i<5; i++)
        {
            scanf("%d",&ara[i]);
        }
        for(i=0; i<5; i++)
        {
            if(ara[i]==t)
                num++;
        }
        printf("%d\n",num);
    }
    return 0;
}

