#include<bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    char key;

} edge;

const int maxi=105;
char grid[maxi][maxi];
bool flag[maxi][maxi];

vector<node>v;
map<char,int>mp;
map<char,int>::iterator it;

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

void floodfill(int i,int j,char ch)
{
    if(i<0 || j<0 || i>row-1 || j>col-1)
        return ;

    if(grid[i][j] == ch && !flag[i][j])
    {
        flag[i][j] = true;

        mp[ch]++;

        floodfill(i,j+1,ch);
        floodfill(i,j-1,ch);
        floodfill(i-1,j,ch);
        floodfill(i+1,j,ch);
    }
}

bool cmp(node a, node b)
{
    if(a.val == b.val) return a.key<b.key;
    return a.val>b.val;
}

int main()
{
    while(cin>>row>>col)
    {
        static int cs = 0;

        if(!row && !col) break;

        input();
        init();

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(isupper(grid[i][j]) && !flag[i][j])
                {
                    char ch = grid[i][j];

                    floodfill(i,j,ch);

                    it = mp.begin();

                    edge.val = it->second;
                    edge.key = it->first;

                    v.push_back(edge);
                    mp.clear();
                }
            }
        }

        sort(v.begin(),v.end(),cmp);

        cout<<"Problem "<<++cs<<":"<<endl;

        for(int i=0; i<v.size(); i++)
            cout<<v[i].key<<" "<<v[i].val<<endl;

        v.clear();
    }

    return 0;
}
