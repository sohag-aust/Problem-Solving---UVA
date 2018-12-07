/**
AREA OF POLYGONAL == 1/2*N*R^2*SIN(2*PI)/N
and we know, pi = 2*acos(0.0);
kono problem e jodi sin er moddhe pi er man ber korte hoi tokhon ami,,
pi = 2*acos(0.0) kore nibo age... then baki calculation korbo...
*/


#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    double r,n;
    double pi,res1,res2,area;
    double x,x1;
    while(scanf("%lf %lf",&r,&n)!=EOF)
    {
        pi=(2*(2*acos(0.0)))/n;
        res1=sin(pi);
        res2=(r*r)*res1;
        area=(n*res2)/2.0;
        printf("%.3lf\n",area);
    }
    return 0;
}

