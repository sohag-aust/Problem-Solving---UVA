#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        if(a==b && a!=c && b!=c)
            printf("C\n");
        else if(a==c && b!=c && b!=a)
            printf("B\n");
        else if(b==c && a!=b && a!=c)
            printf("A\n");
        else if(a==b && b==c && c==a)
            printf("*\n");
    }
    return 0;
}

