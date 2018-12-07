#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row,col;

    while(cin>>row>>col)
    {
        int grid[row+2][col+2];

        for(int k=1; k<=row; k++)
        {
            int ind;
            cin>>ind;
            cin.ignore();

            if(ind == 0)
            {
                string s;
                getline(cin,s);

                for(int i=1; i<=col; i++)
                    grid[k][i] = 0;
            }

            else
            {
                map<int,bool>mp;

                for(int m=1; m<=ind; m++)
                {
                    int m1;
                    cin>>m1;
                    mp[m1] = true;
                }

                int ara[ind+2];

                for(int m=1; m<=ind; m++)
                    cin>>ara[m];

                int n = 0;

                for(int i=1; i<=col; i++)
                {
                    if(mp[i])
                        grid[k][i] = ara[++n];

                    else
                        grid[k][i] = 0;
                }
            }
        }

        int mat[col+2][row+2];

        for(int i=1; i<=col; i++)
        {
            for(int j=1; j<=row; j++)
                mat[i][j] = grid[j][i];
        }

        cout<<col<<" "<<row<<endl;

        for(int i=1; i<=col; i++)
        {
            int cnt = 0;
            vector<pair<int,int> >ans;

            for(int j=1; j<=row; j++)
            {
                if(mat[i][j])
                {
                    cnt++;
                    ans.push_back({j,mat[i][j]});
                }
            }

            if(cnt)
            {
                cout<<cnt<<" ";

                for(int i=0; i<ans.size(); i++)
                {
                    if(i == ans.size()-1)
                        cout<<ans[i].first<<endl;

                    else
                        cout<<ans[i].first<<" ";
                }

                for(int i=0; i<ans.size(); i++)
                {
                    if(i == ans.size()-1)
                        cout<<ans[i].second<<endl;

                    else
                        cout<<ans[i].second<<" ";
                }
            }

            else
                cout<<"0"<<endl<<endl;
        }
    }

    return 0;
}


