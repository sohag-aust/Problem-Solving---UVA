#include<stdio.h>
#include<math.h>
int main(void)
{
    int num,test;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&num);

        num*=567;
        num/=9;
        num+=7492;
        num*=235;
        num/=47;
        num-=498;
        num/=10;
        num=abs(num%10);
        printf("%d\n",num);
    }
    return 0;
}

