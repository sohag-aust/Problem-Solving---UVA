#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    int a,b,c,d,e;
    while(cin>>num)
    {
        if(num==0)
            break;
        while(num--)
        {
            cin>>a>>b>>c>>d>>e;
            if((a<=127 && b<=127) ||(a<=127 && c<=127) || (a<=127 && d<=127) ||(a<=127 && e<=127))
                cout<<"*"<<endl;

            else if((b<=127 && c<=127) ||(b<=127 && d<=127) || (b<=127 && e<=127))
                cout<<"*"<<endl;

            else if((c<=127 && d<=127) ||(c<=127 && e<=127))
                cout<<"*"<<endl;

            else if((d<=127 && e<=127))
                cout<<"*"<<endl;

            else if((a<=127) && ((a!=b) && (a!=c) && (a!=d) && (a!=e)))
                cout<<"A"<<endl;

            else if((b<=127) && ((b!=a) && (b!=c) && (b!=d) && (b!=e)))
                cout<<"B"<<endl;

            else if((c<=127) && ((c!=a) && (c!=b) && (c!=d) && (c!=e)))
                cout<<"C"<<endl;

            else if((d<=127) && ((d!=a) && (d!=b) && (d!=c) && (d!=e)))
                cout<<"D"<<endl;

            else if((e<=127) && ((e!=a) && (e!=b) && (e!=c) && (e!=d)))
                cout<<"E"<<endl;
            else
                cout<<"*"<<endl;

        }
    }
    return 0;
}

