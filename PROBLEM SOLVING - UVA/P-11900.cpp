#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t,a,b,c,ar[10000];
    cin>>t;
    int k=0;
    while(t--)
    {
        int cnt=0;
        int sum=0;
        int sum1=0;
        cin>>a>>b>>c;
        for(int i=0; i<a; i++)
            cin>>ar[i];
        sort(ar,ar+a);
        for(int i=0; i<a; i++)
        {
            sum1+=ar[i];
            if(sum1<=c)
            {
                cnt++;
                if(cnt<=b)
                    sum++;
            }
        }
        cout<<"Case "<<++k<<": "<<sum<<endl;
    }
    return 0;
}

