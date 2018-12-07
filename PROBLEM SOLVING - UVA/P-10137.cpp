#include<bits/stdc++.h>
#define  sc scanf
#define  pf printf
using namespace std;

int main()
{
    double a[100000];
    double sum,avrg,sum1,diff,sum2;
    int test;

    while(cin>>test)
    {
        if(test==0)
            break;

        sum=sum1=avrg=diff=sum2=0;

        for(int i=0; i<test; i++)
            sc("%lf",&a[i]);

        for(int i=0; i<test; i++)
            sum+=a[i];

        avrg=sum/(double)test;

        for(int i=0; i<test; i++)
        {
            diff=(long)((a[i] - avrg) * 100) / 100.0; /// 2 doshomik sthan porjonto calculate korar jnno use korbo long and 100 er hisab ta.. jodi 3 doshomik sthan hisab kortam tahole 100 er jaigai 1000 die gun and vag krte hoto....

            if(diff<0)
                sum2-=diff;
            else
                sum1+=diff;

        }

       // pf("sum1: %.2lf\n",sum1);
        //pf("sum2: %.2lf\n",sum2);

        if(sum1>sum2)
            pf("$%.2lf\n",sum1);
        else
            pf("$%.2lf\n",sum2);
    }
    return 0;
}

