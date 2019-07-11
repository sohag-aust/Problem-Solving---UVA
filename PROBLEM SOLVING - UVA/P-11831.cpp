#include<bits/stdc++.h>
using namespace std;

#define valid(x,y) (x>=0 && y>=0 && x<row && y<col)
typedef pair<int,int> pii;

int dx[4] = {-1,0,+1,0};
int dy[4] = {0,+1,0,-1};

const int sz = 100 + 5;

map<char,int>mp;
map<pair<int,int>,bool>visit;

int row,col;
char grid[sz][sz];

void init()
{
    mp['N'] = 0, mp['L'] = 1, mp['S'] = 2, mp['O'] = 3;
}

int main()
{
    init();

    int com, position;
    int init_row,init_col,sticker;

    while(cin>>row>>col>>com)
    {
        if(!row && !col) break;

        sticker = init_row = init_col = position = 0;
        visit.clear();

        for(int i=0;i<row;i++)
        {
            string str;
            cin>>str;

            for(int j=0;j<col;j++)
            {
                grid[i][j] = str[j];

                if(isalpha(str[j]))
                {
                    position = mp[str[j]];
                    init_row = i;
                    init_col = j;
                }
            }
        }

        string command;
        cin>>command;

        for(int i=0;i<com;i++)
        {
            if(command[i] == 'D') position = (position + 1) % 4;
            else if(command[i] == 'E') position = (position + 3) % 4;
            else if(command[i] == 'F')
            {
                int x = init_row + dx[position];
                int y = init_col + dy[position];

                if(valid(x,y) && grid[x][y] != '#')
                {
                    init_row = x;
                    init_col = y;

                    if(grid[init_row][init_col] == '*')
                    {
                        pii p = {init_row,init_col};
                        if(!visit[p])
                        {
                            sticker++;
                            visit[p] = true;
                        }
                    }
                }
            }
        }

        cout<<sticker<<endl;
    }

    return 0;
}
