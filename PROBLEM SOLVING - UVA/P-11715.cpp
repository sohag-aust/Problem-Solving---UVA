
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main(void)
{
    int num;
    float u,v,a,s,t;
    int i=1;
    while(cin>>num)
    {
        switch(num)
        {
        case 0:
            break;
        case 1:
        {
            cin>>u>>v>>t;
            a=(v-u)/t;
            s=((v*v-u*u)/(2*a));
            printf("Case %d: %.3f %.3f\n",i,s,a);
            break;
        }
        case 2:
        {
            cin>>u>>v>>a;
            t=(v-u)/a;
            s=((v*v-u*u)/(2*a));
            printf("Case %d: %.3f %.3f\n",i,s,t);
            break;
        }
        case 3:
        {
            cin>>u>>a>>s;
            v=sqrt((u*u)+(2*a*s));
            t=(v-u)/a;
            printf("Case %d: %.3f %.3f\n",i,v,t);
            break;
        }
        case 4:
        {
            cin>>v>>a>>s;
            u=sqrt((v*v)-(2*a*s));
            t=(v-u)/a;
            printf("Case %d: %.3f %.3f\n",i,u,t);
            break;
        }

        }
        i++;
    }
    return 0;
}
