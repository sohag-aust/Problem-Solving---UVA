#include<bits/stdc++.h>
using namespace std;

const int maxi = 100;
int row,col;
int grid[maxi][maxi];
vector<pair<int,int> >v;
string ans,str;

void flood_fill(int i,int j,int cnt)
{
    if(i<0 || i>row-1 || j<0 || j>col-1)
        return ;

    ans += grid[i][j];
    if(ans == str) return;

    if(cnt == 1) flood_fill(i,j+1,1);
    if(cnt == 2) flood_fill(i,j-1,2);
    if(cnt == 3) flood_fill(i+1,j,3);
    if(cnt == 4) flood_fill(i-1,j,4);
    if(cnt == 5) flood_fill(i-1,j-1,5);
    if(cnt == 6) flood_fill(i-1,j+1,6);
    if(cnt == 7) flood_fill(i+1,j-1,7);
    if(cnt == 8) flood_fill(i+1,j+1,8);
}

int main()
{
    int test;
    cin>>test;
    cin.ignore();

    while(test--)
    {
        cin>>row>>col;

        for(int i=0; i<row; i++)
        {
            string s;
            cin>>s;
            for(int j=0; j<col; j++)
                grid[i][j] = (char)tolower(s[j]);
        }

        int n;
        cin>>n;

        while(n--)
        {
            v.clear();
            cin>>str;

            for(int i=0; i<str.size(); i++)
                str[i] = (char)tolower(str[i]);

            char ch = str[0];

            for(int i=0; i<row; i++)
            {
                for(int j=0; j<col; j++)
                {
                    if(grid[i][j] == ch)
                        v.push_back({i,j});
                }
            }

            for(auto k:v)
            {
                ans = "";

                flood_fill(k.first,k.second,1);

                if(ans == str)
                {
                    cout<<k.first+1<<" "<<k.second+1<<endl;
                    break;
                }

                ans = "";
                flood_fill(k.first,k.second,2);
                if(ans == str)
                {
                    cout<<k.first+1<<" "<<k.second+1<<endl;
                    break;
                }

                ans = "";
                flood_fill(k.first,k.second,3);
                if(ans == str)
                {
                    cout<<k.first+1<<" "<<k.second+1<<endl;
                    break;
                }

                ans = "";
                flood_fill(k.first,k.second,4);
                if(ans == str)
                {
                    cout<<k.first+1<<" "<<k.second+1<<endl;
                    break;
                }

                ans = "";
                flood_fill(k.first,k.second,5);
                if(ans == str)
                {
                    cout<<k.first+1<<" "<<k.second+1<<endl;
                    break;
                }

                ans = "";
                flood_fill(k.first,k.second,6);
                if(ans == str)
                {
                    cout<<k.first+1<<" "<<k.second+1<<endl;
                    break;
                }

                ans = "";
                flood_fill(k.first,k.second,7);
                if(ans == str)
                {
                    cout<<k.first+1<<" "<<k.second+1<<endl;
                    break;
                }

                ans = "";
                flood_fill(k.first,k.second,8);
                if(ans == str)
                {
                    cout<<k.first+1<<" "<<k.second+1<<endl;
                    break;
                }
            }
        }

        if(test) cout<<endl;
    }

    return 0;
}
