#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    char ch[100];
    int test,num;
    cin>>test;
    int b,a,w,t;
    int k=0;
    while(test--)
    {
        b=a=w=t=0;
        cin>>num;
        getchar();
        for(int i=0; i<num; i++)
            cin>>ch[i];
        for(int i=0; i<num; i++)
        {
            if(ch[i]=='B')
                b++;
            else if(ch[i]=='W')
                w++;
            else if(ch[i]=='A')
                a++;
            else if(ch[i]=='T')
                t++;
        }

        if(w==0 && t==0 && b>0 && a!=num)
            cout<<"Case "<<++k<<": "<<"BANGLAWASH"<<endl;

        else if(b==0 && t==0 && w>0 && a!=num)
            cout<<"Case "<<++k<<": "<<"WHITEWASH"<<endl;

        else if(a==num)
            cout<<"Case "<<++k<<": "<<"ABANDONED"<<endl;

        else if(w==b)
            cout<<"Case "<<++k<<": "<<"DRAW "<<b<<" "<<t<<endl;

        else if(w>b)
            cout<<"Case "<<++k<<": "<<"WWW "<<w<<" - "<<b<<endl;

        else if(w<b)
            cout<<"Case "<<++k<<": "<<"BANGLADESH "<<b<<" - "<<w<<endl;
    }
    return 0;
}

