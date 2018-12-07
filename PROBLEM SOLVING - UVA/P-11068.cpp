#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a1,b1,c1,a2,b2,c2;
    double p,p1,p2;
    double x,y;
    while(cin>>a1>>b1>>c1)
    {
        cin>>a2>>b2>>c2;

        if(a1==0 && a2==0 && b1==0 && b2==0 && c1==0 && c2==0)
            break;

        p=(a1*b2)-(a2*b1);

        if(p==0)
            cout<<"No fixed point exists."<<endl;

        else
        {
            p1=(b2*c1)-(b1*c2);
            p2=(a1*c2)-(a2*c1);

            x=p1/p;
            ///if(x==0)
                ///x=(-1)*x;

            y=p2/p;
            ///if(y==0)
                ///y=(-1)*y;

            printf("The fixed point is at %.2lf %.2lf.\n",x,y);
        }
    }
    return 0;
}


