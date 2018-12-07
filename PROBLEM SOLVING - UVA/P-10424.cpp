#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[100000];
    char str2[100000];
    int len1,len2;
    int i,j;
    int sum1,sum2;
    int res1,res2,res3,res4;
    int sum3,sum4,sum5,sum6;
    int ara[10000];
    double res;

    while(gets(str1))
    {
        gets(str2);
        sum1=sum2=sum3=sum4=sum5=sum6=res=0;
        len1=strlen(str1);
        len2=strlen(str2);

        for(i=0; i<len1; i++)
        {
            if(islower(str1[i]))
                sum1+=str1[i]-96;
            else if(isupper(str1[i]))
                sum1+=str1[i]-64;
        }

        for(j=0; j<len2; j++)
        {
            if(islower(str2[j]))
                sum2+=str2[j]-96;
            else if(isupper(str2[j]))
                sum2+=str2[j]-64;
        }

        while(sum1!=0)
        {
            res1=sum1%10;
            sum3+=res1;
            sum1/=10;
        }
        if(sum3>9)
        {
            while(sum3!=0)
            {
                res2=sum3%10;
                sum5+=res2;
                sum3/=10;
            }
        }

        while(sum2!=0)
        {
            res3=sum2%10;
            sum4+=res3;
            sum2/=10;
        }
        if(sum4>9)
        {
            while(sum4!=0)
            {
                res4=sum4%10;
                sum6+=res4;
                sum4/=10;
            }
        }

        ara[0]=sum3;
        ara[1]=sum4;
        ara[2]=sum5;
        ara[3]=sum6;

        sort(ara,ara+4);

        res=(double)ara[2]/(double)ara[3];
        printf("%.2lf %%\n",res*100);
    }
    return 0;
}










