#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int n,m;
        cin>>n>>m;
        cin.ignore();
        string str="IEHOVA#";
        char s[n+2][m+2];

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
                cin>>s[i][j];
        }

        int k=0;
        int t=m-1;

        vector<string>ans;

        for(int i=n-1; i>=0; )
        {
            for(int j=t; j>=0; j--)
            {
                if(s[i][j]=='@' && !k)
                {
                    if(s[i][j-1]==str[k] && j-1>=0)
                    {
                        ans.push_back("left");
                        t=j-1;
                    }
                    else if(s[i][j+1]==str[k] && j+1<=m-1)
                    {
                        ans.push_back("right");
                        t=j+1;
                    }
                    else if(s[i-1][j]==str[k] && i-1>=0)
                    {
                        ans.push_back("forth");
                        t=j;
                        i--;
                    }

                    k++;
                    break;
                }

                else if(k>0)
                {
                    if(s[i][j-1]==str[k] && j-1>=0)
                    {
                        ans.push_back("left");
                        t=j-1;
                    }

                    else if(s[i][j+1]==str[k] && j+1<=m-1)
                    {
                        ans.push_back("right");
                        t=j+1;
                    }

                    else if(s[i-1][j]==str[k] && i-1>=0)
                    {
                        ans.push_back("forth");
                        t=j;
                        i--;
                    }

                    k++;
                    break;
                }
            }

            if(k==7) break;
        }

        for(int i=0;i<ans.size();i++)
        {
            if(i<ans.size()-1) cout<<ans[i]<<" ";
            else cout<<ans[i];
        }

        cout<<endl;
    }

    return 0;
}

