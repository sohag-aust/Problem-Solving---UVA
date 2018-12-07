#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in1.txt","r",stdin);
    string s;
    map<string,bool>visit;
    map<string,bool>track;
    map<int,string>mp;
    map<string,int>mp1;

    int cnt,cnt1;

    vector<int>v1,v2;

    while(cin>>s)
    {
        cnt = 1;
        mp[cnt] = s;
        mp1[s] = cnt;

        v1.push_back(cnt);

        visit[s] = true;
        track[s] = true;

        while(cin>>s)
        {
            if(s=="#") break;

            if(mp1[s]) v1.push_back(mp1[s]);

            else if(!visit[s])
            {
                ++cnt;
                mp[cnt] = s;
                mp1[s] = cnt;
                v1.push_back(cnt);

                visit[s] = true;
                track[s] = true;
            }
        }

        visit.clear();

        while(cin>>s)
        {
            if(s=="#") break;

            if(track[s]) v2.push_back(mp1[s]);

            else if(!visit[s])
            {
                ++cnt;
                mp[cnt] = s;
                v2.push_back(cnt);
                visit[s] = true;
            }
        }

        pair<int,int>p;
        map<pair<int,int>, int>parent;
        vector<int>ans;

        int x=v1.size();
        int y=v2.size();

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

                p=make_pair(i,j);

                if(v1[i-1]==v2[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                    parent[p]='D';
                }

                else
                {
                    if(dp[i][j-1]>=dp[i-1][j])
                    {
                        dp[i][j]=dp[i][j-1];
                        parent[p]='L';
                    }

                    else if(dp[i][j-1]<dp[i-1][j])
                    {
                        dp[i][j]=dp[i-1][j];
                        parent[p]='U';
                    }
                }
            }
        }

        int i=x;
        int j=y;

        while(i && j)
        {
            p=make_pair(i,j);

            if(parent[p]=='L')
                j--;

            else if(parent[p]=='U')
                i--;

            else
            {
                ans.push_back(v1[i-1]);
                i--;
                j--;
            }
        }

        reverse(ans.begin(),ans.end());

        for(int i=0; i<ans.size(); i++)
        {
            if(i<ans.size()-1) cout<<mp[ans[i]]<<" ";
            else cout<<mp[ans[i]];
        }

        cout<<endl;

        visit.clear();
        track.clear();
        mp.clear();
        mp1.clear();
        v1.clear();
        v2.clear();
    }

    return 0;
}
