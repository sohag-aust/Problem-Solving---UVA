#include<stdio.h>
int main(void)
{
    int k,co1,co2;
    int a,b;
    while(scanf("%d",&k)!=EOF)
    {
        if(k==0)
            return 0;

        else
        {
            scanf("%d %d",&co1,&co2);
            while(k--)
            {
                scanf("%d %d",&a,&b);
                if(a>co1 && b>co2)
                    printf("NE\n");
                else if(a==co1 || b==co2)
                    printf("divisa\n");
                else if(a<co1 && b>co2)
                    printf("NO\n");
                else if(a<co1 && b<co2)
                    printf("SO\n");
                else if(a>co1 && b<co2)
                    printf("SE\n");
            }
        }
    }
    return 0;
}

