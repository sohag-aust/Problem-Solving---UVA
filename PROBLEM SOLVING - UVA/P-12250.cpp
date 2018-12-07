#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    char str[1000];

    char a[100] = "HELLO";
    char b[100] = "HOLA";
    char c[100] = "HALLO";
    char d[100] = "BONJOUR";
    char e[100] = "CIAO";
    char f[100] = "ZDRAVSTVUJTE";

    int i=1;
    while(gets(str))
    {
        if(strcmp(str,"#")==0)
        {
            return 0;
        }
        else
        {
            if(strcmp(str,a)==0)
            {
                printf("Case %d: ENGLISH\n",i);
            }
            else if(strcmp(str,b)==0)
            {
                printf("Case %d: SPANISH\n",i);
            }
            else if(strcmp(str,c)==0)
            {
                printf("Case %d: GERMAN\n",i);
            }
            else if(strcmp(str,d)==0)
            {
                printf("Case %d: FRENCH\n",i);
            }
            else if(strcmp(str,e)==0)
            {
                printf("Case %d: ITALIAN\n",i);
            }
            else if(strcmp(str,f)==0)
            {
                printf("Case %d: RUSSIAN\n",i);
            }
            else
            {
                printf("Case %d: UNKNOWN\n",i);
            }
        }
        i++;
    }
    return 0;
}


