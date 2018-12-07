#include<bits/stdc++.h>
#define pf printf
using namespace std;
int main(void)
{
    double x,y,r;
    int test;
    cin>>test;
    while(test--)
    {
        cin>>x>>y>>r;
        double r1;
        r1=sqrt((x*x)+(y*y));
        double sd,ld;
        sd=abs(r-r1);
        ld=r+r1;
        pf("%.2f %.2f\n",sd,ld);
    }
    return 0;
}

