#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    char str[100000];
    int len,val;
    int test,cnt;
    int k=0;
    double res,sum;
    cin>>test;
    getchar();
    while(test--)
    {
        sum=0;
        cnt=0;
        gets(str);
        len=strlen(str);
        for(int i=0; i<len; i+=4)
        {
            cnt++;
            if(cnt%2!=0)
            {
                if(isdigit(str[i+1]))
                {
                    val=str[i]-'0';
                    res=(double)val*5.0;
                    sum+=res;
                }
                else
                {
                    val=str[i]-'0';
                    res=(double)val*0.5;
                    sum+=res;
                }

            }
            else if(cnt%2==0)
            {
                val=str[i]-'0';
                res=(double)val*0.05;
                sum+=res;
            }
        }
        cout<<"Case "<<++k<<": "<<sum<<endl;
    }
    return 0;
}

