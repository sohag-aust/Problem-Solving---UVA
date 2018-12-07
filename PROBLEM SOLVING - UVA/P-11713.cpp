#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[30];
    char b[30];
    int len1,len2;
    int test;
    int i,j;
    cin>>test;
    getchar();
    while(test--)
    {
        int res=1;
        cin>>a>>b;
        len1=strlen(a);
        len2=strlen(b);
        if(len1!=len2)
            res=0;

        else
        {
            for(i=0,j=0; i<len1; i++,j++)
            {
                if((a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u'))
                {
                    if(a[i]==b[j])
                    {
                        res=1;
                    }

                    else
                    {
                        res=0;
                        break;
                    }
                }
                else if((a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'))
                {
                    if((b[j]=='a' || b[j]=='e' || b[j]=='i' || b[j]=='o' || b[j]=='u'))
                    {
                        if(a[i]!=b[j])
                        {
                            res=1;
                        }
                    }
                    else
                    {
                        res=0;
                        break;
                    }
                }
            }
        }
        if(res==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}

