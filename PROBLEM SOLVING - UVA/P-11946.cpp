#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    char str[10000];
    int i,len,test;
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        while(gets(str))
        {
            len=strlen(str);
            if(len==0)
                break;
            for(i=0; i<len; i++)
            {
                if(str[i]=='1')
                {
                    str[i]='I';
                    printf("%c",str[i]);
                }
                else if(str[i]=='2')
                {
                    str[i]='Z';
                    printf("%c",str[i]);
                }
                else if(str[i]=='3')
                {
                    str[i]='E';
                    printf("%c",str[i]);
                }
                else if(str[i]=='4')
                {
                    str[i]='A';
                    printf("%c",str[i]);
                }
                else if(str[i]=='5')
                {
                    str[i]='S';
                    printf("%c",str[i]);
                }
                else if(str[i]=='6')
                {
                    str[i]='G';
                    printf("%c",str[i]);
                }
                else if(str[i]=='7')
                {
                    str[i]='T';
                    printf("%c",str[i]);
                }
                else if(str[i]=='8')
                {
                    str[i]='B';
                    printf("%c",str[i]);
                }
                else if(str[i]=='9')
                {
                    str[i]='P';
                    printf("%c",str[i]);
                }
                else if(str[i]=='0')
                {
                    str[i]='O';
                    printf("%c",str[i]);
                }
                else
                {
                    printf("%c",str[i]);
                }
            }
            printf("\n");
        }
        if(test!=0)
        printf("\n");
    }
    return 0;
}

