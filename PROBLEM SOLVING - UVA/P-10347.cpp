#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    double a,b,c;
    double area,s;
    double s1,s2,s3,s4,s5;
    while(cin>>a>>b>>c)
    {
        s=(a+b+c)/2;
        s1=s-a;
        s2=s-b;
        s3=s-c;
        s4=(s*s1*s2*s3);
        s5=sqrt(s4);
        area=((4*s5)/3)*1.0;

        if(area>0)
            printf("%.3lf\n",area);
        else
        {
          printf("-1.000\n");
        }
    }
    return 0;
}

