#include<bits/stdc++.h>
using namespace std;

char str[10000],st[10000];
int len,len1;
int i,j,m,flag;

int main()
{
    while(gets(st))
    {
        len=len1=m=0;
        flag=1;

        if(strcmp(st,"DONE")==0)
            break;

        len1=strlen(st);

        for(i=0; i<len1; i++)
        {
            if(isalpha(st[i]))
                str[m++]=st[i];
        }

        len=strlen(str);

        if(len==1)
            cout<<"You won't be eaten!"<<endl;

        else
        {
            for(i=0,j=len-1; i<len/2; i++,j--)
            {
                if(tolower(str[i])==tolower(str[j]))
                    flag=1;
                else
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
                cout<<"You won't be eaten!"<<endl;
            else
                cout<<"Uh oh.."<<endl;
        }

        memset(str,'\0',sizeof(str));
    }
    return 0;
}


