#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100000];
    int len,flag;
    while(gets(str))
    {
        flag=1;
        if(strcmp(str,"*")==0)
            break;

        len=strlen(str);

        for(int i=0; i<len-1; i++)
        {
            if(isspace(str[i]))
            {
                if(tolower(str[0])==tolower(str[i+1]))
                    flag=1;

                else
                {
                    flag=0;
                    break;
                }
            }
        }
        if(flag==0)
            cout<<"N"<<endl;
        else
            cout<<"Y"<<endl;
    }
    return 0;
}


