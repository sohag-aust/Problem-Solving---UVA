#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    char str[100000];
    int sum,res,prime;
    while(cin>>str)
    {
        sum=0;
        prime=1;
        int len=strlen(str);
        for(int i=0; i<len; i++)
        {
            if(str[i]>='a' && str[i]<='z')
            {
                res=str[i]-96;
                sum+=res;
            }
            else if(str[i]>='A' && str[i]<='Z')
            {
                res=str[i]-38;
                sum+=res;
            }
        }

        for(int j=2; j<=sqrt(sum); j++)
        {
            if(sum%j==0)
            {
                prime=0;
                break;
            }
        }
        if(prime==1)
            cout<<"It is a prime word."<<endl;
        else
            cout<<"It is not a prime word."<<endl;
    }
    return 0;
}

