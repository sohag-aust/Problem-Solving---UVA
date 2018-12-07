/**
EQUATION IS:
RESULT = (-b + sqrt(b^2-4ac))/2; then jei man ta pabo oitake ceil kore dibo..
r eita asce diagonal er sutro :: = (n*(n-3))/2=x;
*/
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    double num;
    double res;
    int k=0;
    while(scanf("%lf",&num)!=EOF)
    {
        if(num==0)
            break;
        res=sqrt(9+(8*num));
        res=res+3;
        res=res/2;
        res=ceil(res);
        cout<<"Case "<<++k<<": ";
        printf("%.lf\n",res);
    }
    return 0;
}

