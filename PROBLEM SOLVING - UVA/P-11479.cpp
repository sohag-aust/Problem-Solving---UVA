#include<stdio.h>
int main(void)
{
    int t,i;
    long int a,b,c;
    scanf("%d",&t);
    if(t>20||t<0)
    {
        return 0;
    }
    else
    {
        for(i=1; i<=t; i++)
        {
            scanf("%ld %ld %ld",&a,&b,&c);

            if(a+b<=c||a+c<=b||b+c<=a)
            {
                printf("Case %d: Invalid\n",i);
            }
            else if((a+b>c||a+c>b||b+c>a)&&(a==b&&b==c&&c==a))
            {
                printf("Case %d: Equilateral\n",i);
            }
            else if((a+b>c||a+c>b||b+c>a)&&(a==b&&a!=c&&b!=c||a==c&&a!=b&&c!=b||b==c&&b!=a&&c!=a))
            {
                printf("Case %d: Isosceles\n",i);
            }
            else if((a+b>c||a+c>b||b+c>a)&&(a!=b&&b!=c&&c!=a))
            {
                printf("Case %d: Scalene\n",i);
            }
        }
    }
    return 0;
}
