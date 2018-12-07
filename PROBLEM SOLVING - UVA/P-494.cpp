#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    char str[100000];
    int len,word,i;
    while(gets(str))
    {
        word=0;
        len=strlen(str);
        for(i=0;i<len;i++)
        {
            if((str[i]!=' ' && str[i]!='\t') && (str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
            {
               // cout<<"STR is: "<<str[i]<<"  ";
                word++;
                while((str[i]!=' ' && str[i]!='\t') && (str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
                {
                    i++;
                    //cout<<"\nI is: "<<i<<endl;
                }
            }
            else
                continue;
        }
        cout<<word<<endl;
    }
    return 0;
}

