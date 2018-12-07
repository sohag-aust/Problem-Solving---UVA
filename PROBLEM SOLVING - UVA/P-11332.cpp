/**#include<stdio.h>
int main()
{
    int num,sum,mod;
    while(scanf("%d",&num)!=EOF)
    {
        if(num==0)
        {
            return 0;
        }
        else
        {
            if(num<10)
            {
                printf("%d\n",num);
            }
            else if(num>9)
            {
                while(num>9)
                {
                    sum=0;
                    while(num!=0)
                    {
                        mod=num%10;
                        sum+=mod;
                        num/=10;
                    }
                    num=sum;
                }
                printf("%d\n",sum);
            }
        }
    }
    return 0;
}
*/





#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll r,g,b;
    ll sr,sg,sb;
    ll sr1,sg1,sb1;
    ll sum,sum1,res;

    while(cin>>r>>g>>b)
    {
        sum=sum1=0;
        sr=r/3;
        sg=g/3;
        sb=b/3;

        sr1=r%3;
        sg1=g%3;
        sb1=b%3;

        if(!sr1 || !sg1 || !sb1)
        {
            sum=sr+sg+sb;
            cout<<sum<<endl;
        }


        else
        {
            sum1=sr+sg+sb;
            //cout<<"sum1: "<<sum1<<endl;

            if(sr1<sg1 && sr1<sb1)
                res=sr1;

            else if(sg1<sr1 && sg1<sb1)
                res=sg1;

            else if(sb1<sr1 && sb1<sg1)
                res=sb1;

            else if(sr1==sb1 && sr1==sg1)
                res=sr1;

            //res=min(sr1,sg1,sb1);
           // cout<<"res: "<<res<<endl;
            sum1+=res;

            cout<<sum1<<endl;
        }
    }

    return 0;
}

