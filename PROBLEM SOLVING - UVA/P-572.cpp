/**#include<bits/stdc++.h>
using namespace std;

const int maxi=105;

char grid[maxi][maxi];
int flag[maxi][maxi];
int row,col;

void init()
{
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            flag[i][j]=0;
}

void floodfill(int i,int j)
{
    if(i<0 || j<0 || i>row-1 || j>col-1)
        return ;

    if(grid[i][j]=='@' && flag[i][j]==0)
    {
        flag[i][j]=1;

        floodfill(i,j+1);
        floodfill(i,j-1);
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
    //freopen("P-572.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(cin>>row>>col)
    {
        if(!row && !col) break;
        init();
        int cnt=0;
        for(int i=0; i<row; i++)
            for(int j=0; j<col; j++)
                cin>>grid[i][j];

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(grid[i][j]=='@' && flag[i][j]==0)
                {
                    cnt++;
                    floodfill(i,j);
                }
            }
        }

        cout<<cnt<<endl;
    }

    return 0;
}
*/


#include<bits/stdc++.h>
using namespace std;

const int maxi=105;

char grid[maxi][maxi];
int flag[maxi][maxi];
int row,col;
int cg=0,cr=0,cb=0;

void init()
{
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            flag[i][j]=0;
}

void floodfillr(int i,int j)
{
    if(i<0 || j<0 || i>row-1 || j>col-1)
        return ;

    if(grid[i][j]=='R' && flag[i][j]==0)
    {
        flag[i][j]=1;
        cr++;

        floodfillr(i,j+1);
        floodfillr(i,j-1);
        floodfillr(i-1,j);
        floodfillr(i+1,j);
        floodfillr(i-1,j-1);
        floodfillr(i-1,j+1);
        floodfillr(i+1,j-1);
        floodfillr(i+1,j+1);
    }
}

void floodfillg(int i,int j)
{
    if(i<0 || j<0 || i>row-1 || j>col-1)
        return ;

    if(grid[i][j]=='G' && flag[i][j]==0)
    {
        flag[i][j]=1;
        cg++;

        floodfillg(i,j+1);
        floodfillg(i,j-1);
        floodfillg(i-1,j);
        floodfillg(i+1,j);
        floodfillg(i-1,j-1);
        floodfillg(i-1,j+1);
        floodfillg(i+1,j-1);
        floodfillg(i+1,j+1);
    }
}

void floodfillb(int i,int j)
{
    if(i<0 || j<0 || i>row-1 || j>col-1)
        return ;

    if(grid[i][j]=='B' && flag[i][j]==0)
    {
        flag[i][j]=1;
        cb++;

        floodfillb(i,j+1);
        floodfillb(i,j-1);
        floodfillb(i-1,j);
        floodfillb(i+1,j);
        floodfillb(i-1,j-1);
        floodfillb(i-1,j+1);
        floodfillb(i+1,j-1);
        floodfillb(i+1,j+1);
    }
}

int main()
{
    //freopen("P-572.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(cin>>row>>col)
    {
        if(!row && !col) break;
        init();
        int r,g,b;
        r=g=b=0;
        for(int i=0; i<row; i++)
            for(int j=0; j<col; j++)
                cin>>grid[i][j];

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(grid[i][j]=='R' && flag[i][j]==0)
                {
                    r++;
                    floodfillr(i,j);
                }
            }
        }

        init();

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(grid[i][j]=='G' && flag[i][j]==0)
                {
                    g++;
                    floodfillg(i,j);
                }
            }
        }

        init();

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(grid[i][j]=='B' && flag[i][j]==0)
                {
                    b++;
                    floodfillb(i,j);
                }
            }
        }

        cout<<"R -> "<<r<<" -> "<<cr<<endl;
        cout<<"G -> "<<g<<" -> "<<cg<<endl;
        cout<<"B -> "<<b<<" -> "<<cb<<endl;
    }

    return 0;
}
