#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    char str[10000];
    int len,flag=0;
    while(gets(str))
    {
        len=strlen(str);
        for(int i=0; i<len; i++)
        {
            if(str[i]=='"' && flag==0)
            {
                cout<<"``";
                flag=1;
            }
            else if(str[i]=='"' && flag==1)
            {
                cout<<"''";
                flag=0;
            }
            else
                printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}

