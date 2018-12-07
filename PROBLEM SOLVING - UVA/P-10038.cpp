#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    long long int num,i,j,k;
    long long int ara[10000],ara1[10000];
    long long int flag;
    while(cin>>num)
    {
        flag=1;
        for(i=0; i<num; i++)
            cin>>ara[i];

        for(i=0,j=i+1; j<num; i++,j++)
        {
            ara1[i]=abs(ara[j]-ara[i]);
        }
        sort(ara1,ara1+i);

        for(i=0,j=i+1; j<num; i++,j++)
        {
            if(ara1[i]==ara1[j])
            {
                flag=0;
                break;
            }
        }

        if(flag==1)
            cout<<"Jolly"<<endl;
        else if(flag==0)
            cout<<"Not jolly"<<endl;
    }
    return 0;
}


