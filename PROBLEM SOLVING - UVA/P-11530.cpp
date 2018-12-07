#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    char str[100];
    int len,i,test,sum,j;
    scanf("%d",&test);
    getchar();
    for(j=1;j<=test;j++)
    {
        sum=0;
        gets(str);
        len=strlen(str);
        for(i=0;i<len;i++)
        {
            if(str[i]=='a'||str[i]=='d'||str[i]=='g'||str[i]=='j'||str[i]=='m'||str[i]=='p'||str[i]=='t'||str[i]=='w'||str[i]==' ')
            {
                sum+=1;
            }
            else if(str[i]=='b'||str[i]=='e'||str[i]=='h'||str[i]=='k'||str[i]=='n'||str[i]=='q'||str[i]=='u'||str[i]=='x')
            {
                sum+=2;
            }
            else if(str[i]=='c'||str[i]=='f'||str[i]=='i'||str[i]=='l'||str[i]=='o'||str[i]=='r'||str[i]=='v'||str[i]=='y')
            {
                sum+=3;
            }
            else if(str[i]=='s'||str[i]=='z')
            {
                sum+=4;
            }
        }
        printf("Case #%d: %d\n",j,sum);
    }
    return 0;
}

