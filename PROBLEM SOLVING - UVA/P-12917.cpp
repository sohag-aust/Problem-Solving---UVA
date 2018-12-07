#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if(b==c || a>c || (c-a)<b)
            cout<<"Hunters win!"<<endl;
        else
            cout<<"Props win!"<<endl;

    }
    return 0;
}
