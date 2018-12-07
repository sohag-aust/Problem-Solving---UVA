#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    char a[1000]="Hajj";
    char b[1000]="Umrah";
    char c[10]="*";
    char str[1000];
    int i=1;
    while(gets(str))
    {
        if((strcmp(str,a)==0))
            printf("Case %d: Hajj-e-Akbar\n",i);
        else if((strcmp(str,b)==0))
            printf("Case %d: Hajj-e-Asghar\n",i);
        else if((strcmp(str,c)==0))
            break;
            i++;
    }
    return 0;
}

