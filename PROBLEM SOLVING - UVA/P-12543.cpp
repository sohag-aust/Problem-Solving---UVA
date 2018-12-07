/// MY PROCESS...

#include<bits/stdc++.h>
using namespace std;

char s1[100000];
char *s2;
int len1;
int maxi,k;
char ch;

int main()
{
    maxi=0;

    while(cin>>s1)
    {
        k=0;

        if(strcmp(s1,"E-N-D")==0)
            break;

        len1=strlen(s1);

        if(len1>maxi)
        {
            maxi=len1;

            s2=new char[maxi];

            for(int i=0; i<maxi; i++)
            {
                s2[k++]=s1[i];
            }
        }
    }

    for(int j=0; j<maxi; j++)
    {
        if(isalpha(s2[j]) || s2[j]=='-')
        {
            ch=tolower(s2[j]);
            cout<<ch;
        }
    }

    cout<<endl;

    EXIT_SUCCESS;
}



/// learn process...

/**#include<bits/stdc++.h>
using namespace std;

string s1,s2;
int len1;
int maxi,k;
char ch;

int main()
{
    maxi=0;

    while(1)
    {
        cin>>s1;

        k=0;

        if(s1=="E-N-D")
            break;

        len1=s1.size();

        if(len1>maxi)
        {
            maxi=len1;
            s2=s1;
        }
    }

    for(int j=0; j<maxi; j++)
    {
        if(isalpha(s2[j]) || s2[j]=='-')
        {
            ch=tolower(s2[j]);
            cout<<ch;
        }
    }

    cout<<endl;

    return 0;
}
*/

