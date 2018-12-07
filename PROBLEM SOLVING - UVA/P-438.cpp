/** AT FIRST FIND OUT THE LENGTH OF A,B,C;
that is: sqrt ( (x2-x1)^2 + (y2-y1)^2 )
then, find out triangle side: S = (a+b+c)/2..
then find out Lenth: L = sqrt(s*(s-a)*(s-b)*(s-c))..
then find out the radious: R = (a*b*c)/(4*L);
the dimeter: d=2*pi*r..
*/

#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;

double x1,y_1,x2,y2,x3,y3;
double a,b,c;
double s,l,r;

int main()
{
    while(cin>>x1>>y_1>>x2>>y2>>x3>>y3)
    {
        a=((x2-x1)*(x2-x1)) + ((y2-y_1)*(y2-y_1));
        a=sqrt(a);

        b=((x3-x1)*(x3-x1)) + ((y3-y_1)*(y3-y_1));
        b=sqrt(b);

        c=((x3-x2)*(x3-x2)) + ((y3-y2)*(y3-y2));
        c=sqrt(c);

        s=(a+b+c)/2;

        l=sqrt(s*(s-a)*(s-b)*(s-c));

        r=(a*b*c)/(4*l);

        cout<<fixed<<setprecision(2)<<2*pi*r<<endl;
    }

    EXIT_SUCCESS;
}
