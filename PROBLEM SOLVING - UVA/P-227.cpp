#include<bits/stdc++.h>
using namespace std;

char grid[7][7];
string s;
vector<string>v;
vector<char>mov;
pair<int,int>p;
int p1,p2,cs;
bool blank;

void CLR()
{
    v.clear();
    mov.clear();
    memset(grid,'\0',sizeof(grid));
    cin.ignore();
}

void PRINT()
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(grid[i][j] == '*')
            {
                cout<<" ";
                if(j<4) cout<<" ";
            }

            else
            {
                if(j<4) cout<<grid[i][j]<<" ";
                else cout<<grid[i][j];
            }
        }

        cout<<endl;
    }
}

int main()
{
    blank = false;
    cs = 0;

    while(getline(cin,s))
    {
        if(s == "Z") break;

        v.push_back(s);
        for(int i=0; i<4; i++)
        {
            getline(cin,s);
            v.push_back(s);
        }

        for(int i=0; i<v.size(); i++)
        {
            string str = v[i];

            for(int i1=i; i1<=i; i1++)
            {
                for(int j=0; j<5; j++)
                {
                    if(isspace(str[j]))
                    {
                        grid[i][j] = '*';
                        p1 = i;
                        p2 = j;

                        p = make_pair(p1,p2);
                    }
                    else grid[i][j] = str[j];
                }
            }
        }

        v.clear();

        string sequ;
        while(cin>>sequ)
        {
            int sz = sequ.size();
            if(sequ[sz-1]=='0')
            {
                v.push_back(sequ);
                break;
            }

            v.push_back(sequ);
        }

        for(int i=0; i<v.size(); i++)
        {
            string temp = v[i];
            int sz = temp.size();

            for(int j=0; j<sz; j++)
            {
                if(temp[j] == '0') break;
                else mov.push_back(temp[j]);
            }
        }

        int flag = 1;

        for(int i=0; i<mov.size(); i++)
        {
            char ch = mov[i];

            if(ch == 'A')
            {
                p1 = p.first;
                p2 = p.second;

                p1--;

                if(p1<0)
                {
                    flag = 0;
                    break;
                }

                char t1 = grid[p1][p2];

                grid[p1][p2] = '*';

                p = make_pair(p1,p2);

                p1++;

                grid[p1][p2] = t1;
            }

            else if(ch == 'B')
            {
                p1 = p.first;
                p2 = p.second;

                p1++;

                if(p1>=5)
                {
                    flag = 0;
                    break;
                }

                char t1 = grid[p1][p2];

                grid[p1][p2] = '*';

                p = make_pair(p1,p2);

                p1--;

                grid[p1][p2] = t1;
            }

            else if(ch == 'R')
            {
                p1 = p.first;
                p2 = p.second;

                p2++;

                if(p2>=5)
                {
                    flag = 0;
                    break;
                }

                char t1 = grid[p1][p2];

                grid[p1][p2] = '*';

                p = make_pair(p1,p2);

                p2--;

                grid[p1][p2] = t1;
            }

            else if(ch == 'L')
            {
                p1 = p.first;
                p2 = p.second;

                p2--;

                if(p2<0)
                {
                    flag = 0;
                    break;
                }

                char t1 = grid[p1][p2];

                grid[p1][p2] = '*';

                p = make_pair(p1,p2);

                p2++;

                grid[p1][p2] = t1;
            }
        }

        if(blank) cout<<endl;
        blank = true;

        cout<<"Puzzle #"<<++cs<<":"<<endl;

        if(!flag) cout<<"This puzzle has no final configuration."<<endl;

        else PRINT();

        CLR();
    }

    return 0;
}
