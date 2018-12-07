#include<bits/stdc++.h>
using namespace std;

#define maxi 100000

int ara[maxi];
int result[maxi];
int indx[maxi];
int previous[maxi];

int b_search(int val,int st,int en)
{
    int mid;

    while(st<=en)
    {
        mid = st+(en-st)/2;

        if(val<=result[mid])
        {
            if(val>result[mid-1]) break;

            en = mid-1;
        }

        else
        {
            if(val<=result[mid+1])
            {
                mid = mid+1;
                break;
            }

            st = mid+1;
        }
    }

    return mid;
}

void print(int i)
{
    if(i==0) return ;

    print(previous[i]);
    cout<<ara[i]<<endl;

    return ;
}

int main()
{
    memset(result,-1,sizeof(result));
    memset(indx,0,sizeof(indx));
    memset(previous,0,sizeof(previous));

    ara[0]=result[0]=-1e5;

    int i=1,rc=1;
    int mid,val;

    while(cin>>ara[i])
    {
        val = ara[i];

        if(val>result[rc-1])
        {
            result[rc] = val;
            indx[rc] = i;
            previous[i] = indx[rc-1];
            rc++;
        }

        else if(val<result[rc-1])
        {
            mid = b_search(val,1,rc-1);

            result[mid] = val;
            indx[mid] = i;
            previous[i] = indx[mid-1];
        }

        i++;
    }

    cout<<rc-1<<"\n-\n";

    i = indx[rc-1];
    print(i);

    return 0;
}

