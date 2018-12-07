#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    int cs=0;

    while(getline(cin,s1))
    {
        if(s1=="#") break;
        getline(cin,s2);

        pair<int,int>p;
        map<pair<int,int>, char>parent;
        vector<char>ans;

        int x=s1.size();
        int y=s2.size();

        int dp[x+2][y+2];

        for(int i=0; i<=x; i++)
        {
            for(int j=0; j<=y; j++)
            {
                if(i==0 || j==0)
                {
                    dp[i][j]=0;
                    continue;
                }

                if(s1[i-1]==s2[j-1])
                    dp[i][j]=dp[i-1][j-1]+1;

                else
                    dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
            }
        }

        cout<<"Case #"<<++cs<<": you can visit at most "<<dp[x][y]<<" cities."<<endl;
    }

    return 0;
}
