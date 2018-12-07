#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int ara[1000];
    int num,pos,neg;
    int k=1;
    while(cin>>num)
    {
        pos=0;
        neg=0;
        if(num==0)
            break;
        else
        {
            for(int i=0; i<num; i++)
                cin>>ara[i];
            for(int i=0; i<num; i++)
            {
                if(ara[i]>0)
                    pos++;
                else if(ara[i]==0)
                    neg++;
            }
            cout<<"Case "<<k<<": "<<pos-neg<<endl;
        }
        k++;
    }
    return 0;
}

