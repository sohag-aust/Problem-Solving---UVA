#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    char s1[100000];
    char s2[100000];
    int flag;
    int cnt;
    while(cin>>s1>>s2)
    {
        flag=1;
        cnt=0;
        if((strcmp(s1,"0")==0) && (strcmp(s2,"0")==0))
            break;

        int len=strlen(s2);
        for(int i=0; i<len; i++)
        {
            if(s2[i]=='0')
                flag=0;

            else if(s1[0]!=s2[i] )
            {
                cout<<s2[i];
                flag=1;
                cnt=1;
            }

            else if(s1[0]==s2[i])
                flag=0;
        }
        if(flag==0 && cnt==0)
            cout<<"0";
        cout<<endl;
    }
    return 0;
}

