#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;

    while(getline(cin,s1))
    {
        getline(cin,s2);

        pair<int,int>p;
        map<pair<int,int>, char>parent;
        vector<char>ans;

        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());

        int x = s1.size();
        int y = s2.size();

        int dp[x+2][y+2];

        for(int i=0; i<=x; i++)
        {
            for(int j=0; j<=y; j++)
            {
                if(i == 0 || j == 0)
                {
                    dp[i][j] = 0;
                    continue;
                }

                p=make_pair(i,j);

                if(s1[i-1] == s2[j-1])
                {
                    dp[i][j] = dp[i-1][j-1]+1;
                    parent[p] = 'D';
                }

                else
                {
                    if(dp[i][j-1] >= dp[i-1][j])
                    {
                        dp[i][j] = dp[i][j-1];
                        parent[p] = 'L';
                    }

                    else if(dp[i][j-1] < dp[i-1][j])
                    {
                        dp[i][j] = dp[i-1][j];
                        parent[p] = 'U';
                    }
                }
            }
        }

        int i = x;
        int j = y;

        while(i && j)
        {
            p = make_pair(i,j);

            if(parent[p] == 'L')
                j--;

            else if(parent[p] == 'U')
                i--;

            else
            {
                ans.push_back(s1[i-1]);
                i--;
                j--;
            }
        }

        sort(ans.begin(),ans.end());

        for(int i=0; i<ans.size(); i++)
            cout<<ans[i];
        cout<<endl;
    }

    return 0;
}
