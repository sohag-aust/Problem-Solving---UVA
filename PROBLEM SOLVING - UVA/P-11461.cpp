
#include<stdio.h>
#include<math.h>
int main(void)
{
    long int a,b,count,assign;
    int i;
    float result;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(a==0 && b==0)
        {
            return 0;
        }

        else
        {
            count=0;
            for(i=a;i<=b;i++)
            {
                result = sqrt(i);
                assign = (int)result;
                if(result-assign==0)
                {
                    count++;
                }
            }
            printf("%d\n",count);
        }
    }
    return 0;
}

