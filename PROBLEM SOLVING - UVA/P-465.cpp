#include<bits/stdc++.h>
using namespace std;

char s1[10000],ch,s2[10000];
long long digit1,digit2,temp;
unsigned long long result;

int main()
{
    while(cin>>s1>>ch>>s2)
    {
        temp=2147483647;

        cout<<s1<<" "<<ch<<" "<<s2<<endl;

        digit1=atoll(s1);
        digit2=atoll(s2);

        if(digit1>temp)
            cout<<"first number too big"<<endl;

        if(digit2>temp)
            cout<<"second number too big"<<endl;

        if(ch=='+')
        {
            result=digit1+digit2;
            if(result>temp)
                cout<<"result too big"<<endl;
        }

        else if(ch=='*')
        {
            result=digit1*digit2;
            if(result>temp)
                cout<<"result too big"<<endl;
        }
    }

    EXIT_SUCCESS;
}
