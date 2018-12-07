#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s;
    int ara[100000];
    bool visit[100000];

    while(cin>>n>>s)
    {
        memset(visit,false,sizeof(visit));

        int flag=0;

        for(int i=0;i<s;i++)
        {
            cin>>ara[i];
            visit[ara[i]]=true;
        }

        for(int i=1;i<=n;i++)
        {
            if(!visit[i])
            {
                flag=1;
                cout<<i<<" ";
            }
        }

        if(!flag)
            cout<<"*";

        cout<<endl;
    }

    return 0;
}

/**
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000],b[100000];
    int vol,ret;
    int cnt,diff;
    int i,j;

    while(cin>>vol>>ret)
    {
        cnt=0;
        diff=vol-ret;

        for(i=0; i<ret; i++)
            cin>>a[i];

        if(diff==0)
        {
            cout<<"*";
        }

        else
        {
            sort(a,a+ret);

            for(j=0; j<vol; j++)
                b[j]=++cnt;

            for(j=0,i=0; j<vol; j++)
            {
                if(b[j]==a[i])
                {
                    i++;
                    if(i>=ret)
                        break;
                }
                else
                    cout<<b[j]<<" ";
            }

            for(int k=j+1; k<vol; k++)
            {
                cout<<b[k]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
*/
