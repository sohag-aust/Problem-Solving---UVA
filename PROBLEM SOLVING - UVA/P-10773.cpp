
#include<bits/stdc++.h>
using namespace std;

double river(int d,int v, int u)
{
    double res1=(double)d/(double)u;
    double a=((double)(u*u))-((double)(v*v));
    double b=sqrt(a);
    double res2=(double)d/b;
    if(res1>res2)
    {
        double ans=res1-res2;
        return ans;
    }
    else
    {
        double ans=res2-res1;
        return ans;
    }
}

int main(void)
{
    int d,v,u;
    int test;
    int k=0;
    cin>>test;
    while(test--)
    {
        cin>>d>>v>>u;
        if(u<=v || v==0 || u==0)
            printf("Case %d: can't determine\n",++k);
        else
        {
            double res=river(d,v,u);
            printf("Case %d: %.3lf\n",++k,res);
        }
    }
    return 0;
}

