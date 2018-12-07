#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cs=0;
    while(cin>>n)
    {
        if(!n) break;

        vector<int>v;
        int ara[n][n];

        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                cin>>ara[i][j];

        int c,r,k,sum;
        c=k=sum=0;
        r=n-1;

        for(int i=c; i<=r; i++)
        {
            if(c==r)
            {
                sum+=ara[c][r];
                v.push_back(sum);
                break;
            }

            else if(i==c || i==r)
            {
                for(int j=k; j<=r; j++)
                    sum+=ara[i][j];
            }

            else
                sum+=ara[i][c]+ara[i][r];

            if(i==r)
            {
                v.push_back(sum);

                i=c;
                c++,r--,k++,sum=0;
            }
        }

        cout<<"Case "<<++cs<<": ";

        for(int i=0; i<v.size(); i++)
        {
            if(i==v.size()-1)
                cout<<v[i]<<endl;
            else
                cout<<v[i]<<" ";
        }
    }

    return 0;
}

