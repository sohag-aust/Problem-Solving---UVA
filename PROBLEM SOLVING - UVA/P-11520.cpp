#include<bits/stdc++.h>
using namespace std;

#define sz 15

char grid[sz][sz];
int row,col;

int dx[]= {-1,+1,0,0};
int dy[]= {0,0,-1,+1};

string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main()
{
    int test,cs = 0;
    cin>>test;

    while(test--)
    {
        int n;
        cin>>n;

        row = col = n;

        fill(&grid[0][0],&grid[row][0],'\0');

        string str;
        int flag1 = 0,j = 0,cnt = 0;

        while(n--)
        {
            cin>>str;
            for(int i=0; i<str.size(); i++)
                grid[j][i] = str[i];
            j++;
        }

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                map<char,int>mp;

                if(grid[i][j] == '.')
                {
                    for(int k=0; k<4; k++)
                    {
                        int x = i + dx[k];
                        int y = j + dy[k];

                        if(x<0 || y<0 || x>row-1 || y>col-1)
                            continue;

                        if(isalpha(grid[x][y]))
                            mp[grid[x][y]] = 1;
                    }

                    for(int m=0; m<s.size(); m++)
                    {
                        if(!mp[s[m]])
                        {
                            grid[i][j] = s[m];
                            break;
                        }
                    }
                }
            }
        }

        cout<<"Case "<<++cs<<":"<<endl;

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
                cout<<grid[i][j];
            cout<<endl;
        }
    }

    return 0;
}

