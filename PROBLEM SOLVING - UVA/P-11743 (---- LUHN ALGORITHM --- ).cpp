/// LUHN ALGORITHM:
/// string er sesh theke every 2 digit por por digit gulare double korbo... then double digit er digit separation kore jog korbo..
/// and first theke jegula nea hoinai oigula double korbona...just jog korbo

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    string str,s;
    cin.ignore();
    while(test--)
    {
        getline(cin,str);
        s="";
        for(int i=0;i<str.size();i++)
        {
            if(isdigit(str[i]))
                s+=str[i];
        }

        int sum1,sum2;
        sum1=sum2=0;
        for(int i=s.size()-2;i>=0;i-=2)
        {
            int val=s[i]-'0';
            int v=val*2;
            while(v!=0)
            {
                int m=v%10;
                sum1+=m;
                v/=10;
            }
        }

        for(int i=1;i<s.size();i+=2)
        {
            int val=s[i]-'0';
            sum2+=val;
        }

        int sum=sum1+sum2;
        int mod=sum%10;
        if(mod!=0) cout<<"Invalid";
        else cout<<"Valid";
        cout<<endl;
    }

    return 0;
}

