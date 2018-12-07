#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    int ara[100000];
    int sum,maxi;
    while(cin>>num)
    {
        sum=maxi=0;
        if(num==0)
            break;
        for(int i=0; i<num; i++)
            cin>>ara[i];
        for(int i=0; i<num; i++)
        {
            sum+=ara[i];
            if(sum<=0)
                sum=0;
            else if(sum>=maxi)
                maxi=sum;
        }
        if(maxi==0)
            cout<<"Losing streak."<<endl;
        else
            cout<<"The maximum winning streak is "<<maxi<<"."<<endl;
    }
    return 0;
}

