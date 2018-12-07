
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int a,b;
    int k=0;
    double res;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
            break;
        else
        {
            if(a>b)
                cout<<"Case "<<++k<<": "<<":-("<<endl;
            else if(a==0 || a==1)
                cout<<"Case "<<++k<<": "<<":-\\"<<endl;
            else if(b>=a)
                cout<<"Case "<<++k<<": "<<":-|"<<endl;
        }
    }
    return 0;
}
