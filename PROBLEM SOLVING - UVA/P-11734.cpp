#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[10000];
    char s2[10000];
    char s3[10000];

    int test,flag,k,res,j=0;
    int l1,l2,l3;

    cin>>test;
    getchar();
    while(test--)
    {
        flag=0;
        k=0;
        gets(s2);
        l2=strlen(s2);
        gets(s1);
        l1=strlen(s1);

        for(int i=0; i<l2; i++)
        {
            if(!isspace(s2[i]))
                s3[k++]=s2[i];

            else if(isspace(s2[i]))
                flag=1;
        }
        l3=strlen(s3);

        if((strcmp(s3,s1)==0)  && flag==0)
            cout<<"Case "<<++j<<": Yes"<<endl;

        else if((strcmp(s3,s1)==0) && flag==1)
            cout<<"Case "<<++j<<": Output Format Error"<<endl;

        else if((strcmp(s3,s1)!=0))
            cout<<"Case "<<++j<<": Wrong Answer"<<endl;

        memset(s3,'\0',l3);

    }
    return 0;
}

