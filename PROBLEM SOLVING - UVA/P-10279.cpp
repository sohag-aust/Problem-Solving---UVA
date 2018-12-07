#include<bits/stdc++.h>
using namespace std;

#define valid(x,y) (x>=0 && y>=0 && x<row && y<col)

int row,col;
char grid[20][20];
char grid1[20][20];

int dx[]= {+1,+1,+1,0,0,-1,-1,-1};
int dy[]= {+1,0,-1,+1,-1,+1,0,-1};

int main()
{
    int test;
    cin>>test;

    cin.ignore();

    while(test--)
    {
        memset(grid,'\0',sizeof(grid));
        memset(grid1,'\0',sizeof(grid1));

        int n;
        cin>>n;

        row = col = n;

        for(int i=0; i<row; i++)
            for(int j=0; j<col; j++)
                cin>>grid[i][j];

        pair<int,int>p;
        map<pair<int,int>,int >mp;

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                int cnt = 0;

                if(grid[i][j]=='.')
                {
                    for(int k=0; k<8; k++)
                    {
                        int x = i+dx[k];
                        int y = j+dy[k];

                        if(valid(x,y))
                        {
                            if(grid[x][y] == '*')
                            {
                                cnt++;
                            }
                        }
                    }

                    p = make_pair(i,j);
                    mp[p] = cnt;
                }
            }
        }

        int c = 0;

        for(int i=0; i<row; i++)
            for(int j=0; j<col; j++)
                cin>>grid1[i][j];

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(grid1[i][j]=='x')
                {
                    p = make_pair(i,j);

                    if(grid[i][j] == '*')
                    {
                        c = 1;
                        grid1[i][j] = '*';
                        continue;
                    }

                    char ch = mp[p]+'0';
                    grid1[i][j] = ch;
                }
            }
        }

        if(c == 1)
        {
            for(int i=0; i<row; i++)
            {
                for(int j=0; j<col; j++)
                {
                    if(grid1[i][j] == '.' && grid[i][j] == '*')
                    {
                        grid1[i][j] = '*';
                    }
                }
            }
        }

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
                cout<<grid1[i][j];
            cout<<endl;
        }

        if(test) cout<<endl;
    }

    return 0;
}

