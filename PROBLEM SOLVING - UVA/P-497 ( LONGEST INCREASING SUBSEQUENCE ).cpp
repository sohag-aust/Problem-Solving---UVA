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
    int mid,val,cnt=0;
    char ch;

    int test;
    cin>>test;
    cin.ignore();
    cin.ignore();

    while(test--)
    {
        string str;
        while(getline(cin,str))
        {
            if(str.size()==0) break;
            stringstream ss(str);
            int n;
            while(ss>>n)
            {
                ara[i]=n;
                i++;
            }
        }

        for(int j=1; j<i; j++)
        {
            val = ara[j];

            if(val>result[rc-1])
            {
                result[rc] = val;
                indx[rc] = j;
                previous[j] = indx[rc-1];
                rc++;
            }

            else if(val<result[rc-1])
            {
                mid = b_search(val,1,rc-1);

                result[mid] = val;
                indx[mid] = j;
                previous[j] = indx[mid-1];
            }
        }

        cout<<"Max hits: "<<rc-1<<endl;

        i = indx[rc-1];
        print(i);
        if(test) cout<<endl;

        i=1,rc=1;

        memset(result,-1,sizeof(result));
        memset(indx,0,sizeof(indx));
        memset(previous,0,sizeof(previous));

        ara[0]=result[0]=-1e5;
        cnt=0;
    }

    return 0;
}


