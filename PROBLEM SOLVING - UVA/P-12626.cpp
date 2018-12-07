#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int ara[1000];
    int len;
    int test;
    int m,a,r,g,i1,t;
    cin>>test;
    getchar();
    while(test--)
    {
        m=a=r=g=i1=t=0;
        cin>>str;
        len=str.size();
        for(int i=0; i<len; i++)
        {
            if(isupper(str[i]))
            {
                if(str[i]=='M')
                    m++;
                else if(str[i]=='A')
                    a++;
                else if(str[i]=='R')
                    r++;
                else if(str[i]=='G')
                    g++;
                else if(str[i]=='I')
                    i1++;
                else if(str[i]=='T')
                    t++;
            }
        }
        a/=3;
        r/=2;

        ara[0]=m;
        ara[1]=a;
        ara[2]=r;
        ara[3]=g;
        ara[4]=i1;
        ara[5]=t;

        sort(ara,ara+6);

        cout<<ara[0]<<endl;
    }
    return 0;
}

