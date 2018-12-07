#include<bits/stdc++.h>
using namespace std;

#define valid(x,y) ( (x>=0 && x<r) && (y>=0 && y<c) )

int dx[]= {-1,-1,-1,0,0,+1,+1,+1};
int dy[]= {-1,0,+1,-1,+1,-1,0,+1};

const int maxi=30;
char grid[maxi][maxi];
bool flag[maxi][maxi];

int r,c;

void init()
{
    c=r;
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            flag[i][j]=false;
}

void floodfill(int i,int j)
{
    if(i<0 || j<0 || i>r-1 || j>c-1)
        return ;

    for(int k=0; k<8; k++)
    {
        int x=i+dx[k];
        int y=j+dy[k];

        if(valid(x,y))
        {
            if(grid[x][y]=='1' && !flag[x][y])
            {
                flag[x][y]=true;
                floodfill(x,y);
            }
        }
    }
}

int main()
{
    int cs=0;
    while(cin>>r)
    {
        init();
        int cnt=0;

        for(int i=0; i<r; i++)
            for(int j=0; j<c; j++)
                cin>>grid[i][j];

        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(grid[i][j]=='1' && !flag[i][j])
                {
                    cnt++;
                    floodfill(i,j);
                }
            }
        }

        cout<<"Image number "<<++cs<<" contains "<<cnt<<" war eagles."<<endl;
    }

    return 0;
}
