#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d;
    double res,res1,res2,res3;
    int test,k=0;
    cin>>test;
    while(test--)
    {
        cin>>a>>b>>c>>d;
        res=b-a;
        res1=res*c;
        res2=res1/d;
        res3=b+res2;

        if(res3>10 || res3<0)
            cout<<"Case #"<<++k<<": Impossible"<<endl;
        else
            printf("Case #%d: %.2lf\n",++k,res3);
    }
    return 0;
}


