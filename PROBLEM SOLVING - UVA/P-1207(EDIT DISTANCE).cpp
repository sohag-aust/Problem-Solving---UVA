#include<bits/stdc++.h>
using namespace std;

int main()
{
    string text,find;
    int ta,tb;

    while(cin>>ta)
    {
        cin>>text;
        cin>>tb;
        cin>>find;

        int text_len=text.size();
        int find_len=find.size();

        int dp[text_len+2][find_len+2];

        for(int i=0; i<=text_len; i++)
        {
            for(int j=0; j<=find_len; j++)
            {
                if(i==0) dp[i][j]=j;
            }

            if(i>0) dp[i][0]=i;
        }

        int left,up,diag;
        left=up=diag=0;

        pair<int,int>p;
        map<pair<int,int>,char>parent;

        for(int i=1; i<=text_len; i++)
        {
            for(int j=1; j<=find_len; j++)
            {
                p=make_pair(i,j);

                if(text[i-1]==find[j-1])
                {
                    dp[i][j]=dp[i-1][j-1];
                    parent[p]='d';
                }

                else
                {
                    int left=dp[i][j-1];
                    int up=dp[i-1][j];
                    int diag=dp[i-1][j-1];

                    if(left<=up && left<=diag)
                    {
                        dp[i][j]=left+1;
                        parent[p]='L';
                    }

                    else if(up<=left && up<=diag)
                    {
                        dp[i][j]=up+1;
                        parent[p]='U';
                    }

                    else
                    {
                        dp[i][j]=diag+1;
                        parent[p]='D';
                    }
                }
            }
        }

        int i=text_len;
        int j=find_len;

        cout<<dp[i][j]<<endl;
    }

    return 0;
}

