#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    double a,b;
    while(cin>>a>>b)
    {
        double val=1/a;
        double res=pow(b,val);
        printf("%.lf\n",res);
    }
    return 0;
}

