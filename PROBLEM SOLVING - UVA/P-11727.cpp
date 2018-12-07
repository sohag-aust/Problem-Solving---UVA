
#include<stdio.h>
int main(void)
{
    int a,b,c,t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a<b&&b<c||c<b&&b<a)
        {
            printf("Case %d: %d\n",i,b);
        }
        else if(b<a&&a<c||c<a&&a<b)
        {
            printf("Case %d: %d\n",i,a);
        }
        else if(a<c&&c<b||b<c&&c<a)
        {
            printf("Case %d: %d\n",i,c);
        }
    }
    return 0;
}
