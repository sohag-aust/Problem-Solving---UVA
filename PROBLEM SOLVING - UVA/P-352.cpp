#include<bits/stdc++.h>
using namespace std;

const int maxi=30;
char grid[maxi][maxi];
int r,c;
int flag[maxi][maxi];

void init()
{
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            flag[i][j]=0;
}

void floodfill(int i,int j)
{
    if(i<0 || j<0 || i>r-1 || j>c-1)
        return ;

    if(grid[i][j]=='1' && flag[i][j]==0)
    {
        flag[i][j]=1;

        floodfill(i,j-1);
        floodfill(i,j+1);
        floodfill(i-1,j);
        floodfill(i+1,j);
        floodfill(i-1,j-1);
        floodfill(i-1,j+1);
        floodfill(i+1,j-1);
        floodfill(i+1,j+1);
    }
}

int main()
{
    int cs=0;
    while(cin>>r)
    {
        int cnt=0;
        c=r;
        init();

        for(int i=0; i<r; i++)
            for(int j=0; j<c; j++)
                cin>>grid[i][j];

        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(grid[i][j]=='1' && flag[i][j]==0)
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
