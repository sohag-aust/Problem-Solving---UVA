#include<bits/stdc++.h>
using namespace std;

map<char,int>cnt;
char grid[55][1005];
string ans,temp = "ACGT";

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int row,col;
        cin>>row>>col;

        for(int i=0; i<row; i++)
            for(int j=0; j<col; j++)
                cin>>grid[i][j];

        ans = "";
        int sum = 0;

        for(int j=0;j<col;j++)
        {
            int maxi = 0;
            cnt.clear();

            for(int i=0;i<row;i++)
            {
                cnt[grid[i][j]]++;
                maxi = max(maxi,cnt[grid[i][j]]);
            }

            for(int k=0;k<4;k++)
            {
                if(cnt[temp[k]] == maxi)
                {
                    ans += temp[k];
                    break;
                }
            }
        }

        for(int j=0;j<col;j++)
        {
            for(int i=0;i<row;i++)
            {
                if(ans[j] != grid[i][j]) sum++;
            }
        }

        cout<<ans<<endl;
        cout<<sum<<endl;
    }

    return 0;
}

