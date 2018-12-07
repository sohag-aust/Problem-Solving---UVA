
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int num;
    int i,j,cnt;
    while(cin>>num)
    {
        cnt=0;
        i=0;
        if(num==0)
            break;
        int ara[10000];
        while(num!=0)
        {
            ++i;
            ara[i]=num%2;
            num/=2;
        }
        cout<<"The parity of ";
        for(j=i; j>0; j--)
            cout<<ara[j];
        cout<<" is ";
        for(j=i; j>0; j--)
        {
            if(ara[j]==1)
                cnt++;
        }
        cout<<cnt<<" (mod 2)."<<endl;
    }
    return 0;
}
