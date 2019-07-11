#include<bits/stdc++.h>
using namespace std;

#define valid(x,y) (x>=0 && y>=0 && x<row && y<col)

const int sz = 60 + 5;
int row,col;
char mat[sz][sz];

map<int,char>direction;
int dx[4] = {-1,0,+1,0};
int dy[4] = {0,+1,0,-1};

void init()
{
    direction[0] = 'N', direction[1] = 'E', direction[2] = 'S', direction[3] = 'W';
}

int main()
{
    init();
    int test;
    cin>>test;

    while(test--)
    {
        cin.ignore();
        cin>>row>>col;
        cin.ignore();

        string str;

        for(int i=0;i<row;i++)
        {
            getline(cin,str);

            for(int j=0;j<col;j++)
            {
                mat[i][j] = str[j];
            }
        }

        int init_row, init_col;
        cin>>init_row>>init_col;
        cin.ignore();

        string command;
        int point_to = 0;
        init_row--, init_col--;

        while(getline(cin,command))
        {
            for(int i=0;i<command.size();i++)
            {
                if(command[i] == 'Q') goto work;

                else if(command[i] == ' ') continue;
                else if(command[i] == 'R') point_to = (point_to+1)%4;
                else if(command[i] == 'L') point_to = (point_to+3)%4;
                else if(command[i] == 'F')
                {
                    int x = init_row + dx[point_to];
                    int y = init_col + dy[point_to];

                    if(valid(x,y) && mat[x][y] != '*')
                    {
                        init_row = x;
                        init_col = y;
                    }
                }
            }
        }

        work:
            cout<<init_row+1<<" "<<init_col+1<<" "<<direction[point_to]<<endl;
            if(test) puts("");
    }

    return 0;
}
