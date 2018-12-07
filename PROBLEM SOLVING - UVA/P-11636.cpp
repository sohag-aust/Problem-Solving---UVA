#include<bits/stdc++.h>
using namespace std;

int main()
{
    double cnt,n,sum,cs=0;

    while(cin>>n)
    {
        if(n<0) break;
        int k=0;
        sum=0;

        while(sum<n)
        {
            sum=pow((double)2,k);
            k++;
        }
        cout<<"Case "<<++cs<<": "<<k-1<<endl;
    }
    return 0;
}
