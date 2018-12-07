#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int sq1,len,i,j;
    int test;
    float sq2;
    char str[10000];
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        gets(str);
        len=strlen(str);
        sq2=sqrt(len);
        sq1=sqrt(len);

        if(sq1==sq2)
        {
            for(i=0; i<sq1; i++)
            {
                for(j=i; j<len; j+=sq1)
                {
                    printf("%c",str[j]);
                }
            }
        }
        else
        {
            printf("INVALID");
        }
        printf("\n");
    }
    return 0;
}

