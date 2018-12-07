#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int track_row,track_col;
    int cnt1,cnt2;

    while(cin>>n)
    {
        if(!n) break;

        int grid[n+2][n+2];

        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                cin>>grid[i][j];

        int sum_row,sum_col;
        cnt1=cnt2=0;

        for(int i=0; i<n; i++)
        {
            sum_row = sum_col = 0;

            for(int k=0; k<n; k++)
            {
                sum_col+=grid[k][i];
            }

            for(int j=0; j<n; j++)
            {
                sum_row+=grid[i][j];
            }

            if(sum_row%2!=0)
            {
                if(!cnt1)
                    track_row = i+1;

                cnt1++;
            }

            if(sum_col%2!=0)
            {
                if(!cnt2)
                    track_col = i+1;

                cnt2++;
            }
        }

        if(cnt1>=2 || cnt2>=2 || cnt1+cnt2>2) cout<<"Corrupt";
        else if(cnt1==0 && cnt2==0) cout<<"OK";
        else cout<<"Change bit ("<<track_row<<","<<track_col<<")";

        cout<<endl;
    }

    return 0;
}

