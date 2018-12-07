
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,q,f,flag,k=0,cnt,i;
    long long ara[100000];

    while(cin>>n>>q)
    {
        if(n==0 && q==0)
            break;

        cout<<"CASE# "<<++k<<":"<<endl;

        for(int i=0; i<n; i++)
            cin>>ara[i];
        sort(ara,ara+n);

        while(q--)
        {
            flag=0;
            cnt=0;
            cin>>f;
            for(i=0; i<n; i++)
            {
                if(ara[i]==f)
                {
                    cnt++;
                    flag=i+1;

                    if(cnt==1)
                        cout<<f<<" found at "<<flag<<endl;
                }
            }
            if(flag==0)
                cout<<f<<" not found"<<endl;
        }
    }
    return 0;
}


