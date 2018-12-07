#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, ara[10000],n;
    double sum,cnt;
    cin>>t;
    while(t--)
    {
        sum=0;
        cnt=1;
        n=0;
        while(cin>>ara[n] && ara[n])
        {
            n++;
        }

        sort(ara, ara+n);
        for(int i=n-1; i>=0; i--)
        {
            sum+=(2*pow((double)ara[i],cnt));
            cnt++;
        }
        if(sum<=5000000)
            cout<<sum<<endl;
        else
            cout<<"Too expensive"<<endl;
    }
    return 0;
}


