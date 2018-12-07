
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100000];
    int test,len;
    double val,sum,val1,res,val2,val3,val4;
    cin>>test;
    getchar();
    while(test--)
    {
        sum=0;
        cin>>str;
        len=strlen(str);
        for(int i=0; i<len; i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                if(str[i+1]>='0' && str[i+1]<='9')
                {
                    val=str[i+1]-'0';
                    val1=(double)val;

                    if( (str[i]>='A' && str[i]<='Z') && (str[i+1]>='0' && str[i+1]<='9') && (str[i+2]>='0' && str[i+2]<='9'))
                    {
                        val2=str[i+2]-'0';
                        val3=(double)val2;
                        val4=(val1*10)+val3;
                        if(str[i]=='C')
                        {
                            res=val4*12.01;
                            sum+=res;
                        }
                        else if(str[i]=='H')
                        {
                            res=val4*1.008;
                            sum+=res;
                        }
                        else if(str[i]=='O')
                        {
                            res=val4*16.00;
                            sum+=res;
                        }
                        else if(str[i]=='N')
                        {
                            res=val4*14.01;
                            sum+=res;
                        }
                    }

                    else
                    {
                        if(str[i]=='C')
                        {
                            res=val*12.01;
                            sum+=res;
                        }
                        else if(str[i]=='H')
                        {
                            res=val*1.008;
                            sum+=res;
                        }
                        else if(str[i]=='O')
                        {
                            res=val*16.00;
                            sum+=res;
                        }
                        else if(str[i]=='N')
                        {
                            res=val*14.01;
                            sum+=res;
                        }
                    }
                }
                else
                {
                    if(str[i]=='C')
                    {
                        res=12.01;
                        sum+=res;
                    }
                    else if(str[i]=='H')
                    {
                        res=1.008;
                        sum+=res;
                    }
                    else if(str[i]=='O')
                    {
                        res=16.00;
                        sum+=res;
                    }
                    else if(str[i]=='N')
                    {
                        res=14.01;
                        sum+=res;
                    }
                }
            }
        }
        printf("%.3lf\n",sum);
    }
    return 0;
}

