#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll test,num,temp,rem,rev,cnt,flag;
    ll rem1,rev1,sum,t;

    cin>>test;

    while(test--)
    {
        cin>>num;

        cnt=0;
        temp=num;
        flag=num;

        while(1)
        {
            rev1=rev=0;

            while(temp>0)
            {
                rem=temp%10;
                rev=(rev*10)+rem;
                temp/=10;
            }

            cnt++;
            sum=rev+flag;
            t=sum;

            while(t>0)
            {
                rem1=t%10;
                rev1=(rev1*10)+rem1;
                t/=10;
            }

            if(sum==rev1)
                break;

            temp=sum;
            flag=temp;

        }

        cout<<cnt<<" "<<sum<<endl;
    }

    return 0;
}
