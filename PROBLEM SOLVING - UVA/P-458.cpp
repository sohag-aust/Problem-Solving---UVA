#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    char str[10000];
    int len;
    while(gets(str))
    {
        len=strlen(str);
        for(int i=0; i<len; i++)
        {
            printf("%c",str[i]-7);
        }
        cout<<endl;
    }
    return 0;
}

