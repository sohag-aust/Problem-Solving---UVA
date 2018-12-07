#include<stdio.h>
int main()
{
    int a,b,res;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        res=2*a*b;
        printf("%d\n",res);
    }
    return 0;
}

