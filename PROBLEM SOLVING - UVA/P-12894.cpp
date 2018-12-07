#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test;
    cin>>test;

    while(test--)
    {
        int x0,y0,x1,y1,c1,c2,r;
        cin>>x0>>y0>>x1>>y1>>c1>>c2>>r;

        int len=x1-x0;
        int wid=y1-y0;
        int cx=c1-x0;
        int cy=c2-y0;
        double mid1=ceil((double)wid/2);
        int mid=(int)mid1;
        double center1=ceil((9*(double)len)/(double)20);
        int center=(int)center1;
        int len1=5*r;
        int wid1=(3*len)/5;

        if((cx==center && cy==mid) && ((len1==len && wid1==wid)))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

