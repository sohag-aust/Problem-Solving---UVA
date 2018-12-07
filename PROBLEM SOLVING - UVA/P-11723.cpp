#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,k=0;
    double res1;
    int res;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
            break;

        res1=(double)a/(double)b;
        res=a/b;

        if(res>26)
            cout<<"Case "<<++k<<": impossible"<<endl;
        else
        {
            if(res1==res)
                cout<<"Case "<<++k<<": "<<(int)res1-1<<endl;
            else
                cout<<"Case "<<++k<<": "<<(int)res1<<endl;
        }
    }
    return 0;
}


