#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main(void)
{
    int test;
    cin>>test;
    while(test--)
    {
        double len;
        cin>>len;
        double wid=(6*len)/10;
        double r=len/5;
        double res=len*wid;
        double red=pi*r*r;
        double green=res-red;
        printf("%.2lf %.2lf\n",red,green);
    }
    return 0;
}

