#include<bits/stdc++.h>
using namespace std;

int r,c;

#define valid(x,y) (x>=0 && y>=0 && x<r && y<c)

int dx[]= {+1,+1,+1,0,0,-1,-1,-1};
int dy[]= {+1,0,-1,+1,-1,+1,0,-1};

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    //freopen("i-271.txt","r",stdin);

    bool blank=false;
    int cs=0;

    while(cin>>r>>c)
    {
        if(!r) break;

        char grid[r+1][c+1];

        for(int i=0; i<r; i++)
            for(int j=0; j<c; j++)
                cin>>grid[i][j];

        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(grid[i][j]=='.')
                {
                    int cnt=0;

                    for(int k=0; k<8; k++)
                    {
                        int x=dx[k]+i;
                        int y=dy[k]+j;

                        if(valid(x,y))
                        {
                            if(grid[x][y]=='*')
                                cnt++;
                        }
                    }

                    char ch=cnt+'0';
                    grid[i][j]=ch;
                }
            }
        }

        if(blank) cout<<endl;
        blank=true;

        cout<<"Field #"<<++cs<<":"<<endl;

        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
                cout<<grid[i][j];
            cout<<endl;
        }
    }

    return 0;
}

