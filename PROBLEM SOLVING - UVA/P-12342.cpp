#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    int tax,money;
    int diff1,diff2,diff3;

    cin>>test;

    while(test--)
    {
        static int cnt=1;

        money=tax=diff1=diff2=diff3=0;

        cin>>money;

        if(money<=180000)
            tax=0;

        else if(money>180000 && money<=480000)
        {
            money-=180000;
            tax=ceil(money*0.1);

            if(tax<=2000)
                tax=2000;
        }

        else if(money>480000 && money<=880000)
        {
            money-=480000;
            diff1=480000-180000;
            tax=ceil(diff1*0.1)+ceil(money*0.15);
        }

        else if(money>880000 && money<1180000)
        {
            money-=880000;
            diff1=480000-180000;
            diff2=880000-480000;
            tax=ceil(diff1*0.1)+ceil(diff2*0.15)+ceil(money*.20);
        }

        else
        {
            money-=1180000;
            diff1=480000-180000;
            diff2=880000-480000;
            diff3=1180000-880000;
            tax=ceil(diff1*0.1)+ceil(diff2*0.15)+ceil(diff3*0.20)+ceil(money*.25);
        }

        cout<<"Case "<<cnt<<": "<<tax<<endl;
        cnt++;
    }

    EXIT_SUCCESS;
}

