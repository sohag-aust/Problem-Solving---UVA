
//Problem Type : Number Theory



#include<bits/stdc++.h>
using namespace std;
#define LEN 1110

int main()
{
    long long int i,j,len,k,cou,sum,m;
    char ch[LEN];
    while(scanf("%s",&ch)&&ch)
    {
        if(strcmp(ch,"0")==0)
            break;
        len = strlen(ch);
        sum=0;
        m=0;

        for(i=0; i<len; i++)
        {
            sum = m*10 + ch[i]-48;

            m = sum%11;
        }
        if(m==0)
        {

            printf("%s is a multiple of 11.\n",ch);
        }
        else
        {
            printf("%s is not a multiple of 11.\n",ch);
        }

    }
    return 0;
}
