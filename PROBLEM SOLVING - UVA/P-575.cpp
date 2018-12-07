#include<bits/stdc++.h>
using namespace std;

string str;
int len;
int digit,res,sum,k;

int main()
{
    while(cin>>str)
    {
        if(str=="0")
            break;

        digit=res=sum=0;
        len=str.length();

        k=1;
        for(int i=len-1; i>=0; i--)
        {
            digit=str[i]-'0';
            //cout<<"Digit: "<<digit<<endl;

            res=pow(2,(double)k);
            //cout<<"res: "<<res<<endl;
            res--;
            //cout<<"res: "<<res<<endl;
            res*=digit;
            //cout<<"res: "<<res<<endl;
            sum+=res;
            //cout<<"sum: "<<sum<<endl;
            k++;
        }
        cout<<sum<<endl;
    }

    EXIT_SUCCESS;
}

