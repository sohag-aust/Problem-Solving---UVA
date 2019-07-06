/// FINDING VALUE FROM EQUATION

#include<bits/stdc++.h>
using namespace std;

const double EPS = 1e-7;
int p,q,r,s,t,u;

double f(double x)
{
    //return ( (3*x) - cos(x) -1 );
    return ( (p*exp(-x)) + (q*sin(x)) + (r*cos(x)) + (s*tan(x)) + (t*x*x) + u );
}

double fd(double x)
{
    //return ( (3) + sin(x) );
    return ( (-p*exp(-x)) + (q*cos(x)) - (r*sin(x)) + (s/(cos(x)*cos(x))) + (2*t*x) );
}

int main()
{
    while(cin>>p>>q>>r>>s>>t>>u)
    {
        int a = 0;
        double f_prev = f(a);
        int b = 1;
        double f_next = f(b);

        if(f_prev * f_next > 0)
            cout<<"No solution"<<endl;

        else if(f_prev == 0)
            cout<<setprecision(4)<<fixed<<(double)0<<endl;

        else
        {
            double xn = b;
            int cnt = 0;
            while(true)
            {
                double xni = xn - (f(xn) / fd(xn));

                if(fabs(xni - xn) < EPS)
                {
                    cout<<setprecision(4)<<fixed<<xni<<endl;
                    break;
                }

                xn = xni;
            }
        }
    }

    return 0;
}
