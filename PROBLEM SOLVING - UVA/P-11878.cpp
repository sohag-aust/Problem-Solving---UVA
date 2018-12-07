
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int a,b;
    char ch,str[100];
    int cnt=0;
    int val,res;
    while(scanf("%d%c%d=%s",&a,&ch,&b,str)==4)
    {
        if(str[0]=='?')
            continue;

        if(ch=='+')
        {
            val=atoi(str);
            res=a+b;
            if(val==res)
                cnt++;
        }
        else if(ch=='-')
        {
            val=atoi(str);
            res=a-b;
            if(val==res)
                cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
