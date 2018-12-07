#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int xr[]= {-1,-1,-1,0,0,1,1,1};
int yc[]= {-1,0,1,-1,1,-1,0,1};

int row,col;
char str[102][102];

int main()
{
    while(cin>>row>>col)
    {
        if(row==0&&col==0) break;
        for(int i=0; i<row; i++)
        {
            for(int j=0;j<col;j++)
                cin>>str[i][j];
        }

        int cnt=0;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                bool flag=false;
                if(str[i][j]=='*')
                {
                    for(int k=0; k<8; k++)
                    {
                        if(((i+xr[k])>=0&&(i+xr[k])<row)&&((j+yc[k])>=0&&(j+yc[k])<col))
                        {
                            int R=i+xr[k];
                            int C=j+yc[k];
                            if(str[R][C]=='*') flag=true;
                        }
                    }

                    if(flag==false) cnt++;
                }
            }
        }

        printf("%d\n",cnt);

    }

    return 0;
}
/**
/// UVA -> COUNTING STARS (11244)

#include<bits/stdc++.h>
using namespace std;

#define valid(x,y) (x>=0 && y>=0 && x<row && y<col)

const int maxi=105;
char grid[maxi][maxi];
bool flag[maxi][maxi];

int dx[]= {+1,+1,+1,0,0,-1,-1,-1};
int dy[]= {+1,0,-1,+1,-1,+1,0,-1};

int row,col;

void input()
{
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            cin>>grid[i][j];
}

void init()
{
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            flag[i][j]=false;
}

void floodfill()
{
    /// floodfill with direction array..

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(grid[i][j]=='*' && !flag[i][j])
            {
                for(int k=0; k<8; k++)
                {
                    int x=i+dx[k];
                    int y=j+dy[k];

                    if(valid(x,y))
                    {
                        if(grid[x][y]=='*')
                            flag[i][j]=true;
                    }
                }
            }
        }
    }
}

int main()
{
    while(cin>>row>>col)
    {
        if(!row && !col) break;

        input();
        init();
        floodfill();

        int cnt=0;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(grid[i][j]=='*' && flag[i][j]==0)
                    cnt++;
            }
        }

        cout<<cnt<<endl;
    }

    return 0;
}

*/
