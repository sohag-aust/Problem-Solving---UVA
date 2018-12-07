#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    char str[100000];
    long long num,m;
    long long sum,res,sum1,sum3;
    long long res1,sum2;
    while(cin>>str)
    {
        if(strcmp(str,"0")==0)
            break;
        m=0;
        sum=0;
        sum1=0;
        sum2=0;
        sum3=0;
        int j=1;
        int len=strlen(str);
        for(int i=0; i<len; i++)
        {
            num=(m*10)+str[i]-48;
            m=num%9;
        }
        if(m==0)
        {
            for(int i=0; i<len; i++)
            {
                sum+=str[i]-48;
            }
            if(sum>9)
            {
                while(sum!=0)
                {
                    res=sum%10;
                    sum1+=res;
                    sum/=10;
                }
                j++;
                if(sum1>9)
                {
                    while(sum1!=0)
                    {
                        int res1=sum1%10;
                        sum2+=res1;
                        sum1/=10;
                    }
                    j++;
                }
                printf("%s is a multiple of 9 and has 9-degree %d.\n",str,j);
            }

            else
                printf("%s is a multiple of 9 and has 9-degree %d.\n",str,j);
        }
        else
            printf("%s is not a multiple of 9.\n",str);
    }
    return 0;
}

