#include<bits/stdc++.h>
using namespace std;

set<int>st;
int ii,jj,cnt;
int grid[30][30];

int solve(int row,int col,int n,int sz)
{
    if(cnt == sqrt(sz)) return (st.size());

    int val = grid[row][col];
    st.insert(val);

    if(col < (sqrt(sz)+jj)-1) col++;
    else
    {
        row++,col = jj;
        cnt++;

        if(cnt == sqrt(sz)) return (st.size());
    }

    solve(row,col,n,sz);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);

    int test;
    cin>>test;

    while(test--)
    {
        int n;
        cin>>n;

        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                cin>>grid[i][j];

        int sz,flag = 1;
        cnt = 0;

        /// GRID CHECKING
        for(ii=0,jj=0; ii<n; ii+=sqrt(n),jj=0,cnt=0)
        {
            st.clear();
            sz = solve(ii,jj,(sqrt(n)+ii),n);

            if(sz != n)
            {
                flag = 0;
                break;
            }

            for(jj=sqrt(n),cnt=0; jj<n; cnt=0,jj+=sqrt(n))
            {
                st.clear();
                sz = solve(ii,jj,(sqrt(n)+jj),n);

                if(sz != n)
                {
                    flag = 0;
                    break;
                }
            }
        }

        /// ROW,COL CHECKING
        map<int,int>mp1,mp2;

        for(int i=0; i<n; i++)
        {
            mp1.clear();
            mp2.clear();

            for(int j=0; j<n; j++)
            {
                mp1[grid[i][j]]++;
                if(mp1[grid[i][j]] > 1)
                {
                    flag = 0;
                    break;
                }

                mp2[grid[j][i]]++;
                if(mp2[grid[j][i]] > 1)
                {
                    flag = 0;
                    break;
                }
            }

            if(!flag) break;
        }

        cout<<((flag) ? "yes":"no")<<endl;
    }

    return 0;
}

