#include<stdio.h>
int main(void)
{
    int t1,t2,f,a,ct1,ct2,ct3;
    int sum,total,val;
    int test,i;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        sum=0;
        scanf("%d %d %d %d %d %d %d",&t1,&t2,&f,&a,&ct1,&ct2,&ct3);
        sum=t1+t2+f+a;

        if((ct1>=ct2 && ct1>=ct3 && ct2>=ct3) || (ct2>=ct1 && ct1>=ct3 && ct2>=ct3))
        {
            val=(ct1+ct2)/2;
        }

        else if((ct1>=ct3 && ct1>=ct2 && ct3>=ct2) || (ct3>=ct1 && ct1>=ct2 && ct3>=ct2))
        {
            val=(ct1+ct3)/2;
        }

        else if((ct2>=ct3 && ct2>=ct1 && ct3>=ct1) || (ct3>=ct2 && ct2>=ct1 && ct3>=ct1))
        {
            val=(ct2+ct3)/2;
        }

        total = sum+val;
        //printf("%d\n",total);

        if(total>=90)
        {
            printf("Case %d: A\n",i);
        }
        else if(total>=80 && total<90)
        {
            printf("Case %d: B\n",i);
        }
        else if(total>=70 && total<80)
        {
            printf("Case %d: C\n",i);
        }
        else if(total>=60 && total<70)
        {
            printf("Case %d: D\n",i);
        }
        else if(total<60)
        {
            printf("Case %d: F\n",i);
        }

    }
    return 0;
}

