#include<bits/stdc++.h>
using namespace std;

#define maxi 210

char grid[maxi][maxi];
int visit[maxi][maxi];
int ans,k;

void floodfill(int i,int j,char ch)
{
    if(i<0 || j<0 || i>k-1 || j>k-1)
        return ;

    if(grid[i][j] == ch && !visit[i][j])
    {
        visit[i][j] = 1;

        if(ch == 'W') ans++;

        floodfill(i,j+1,ch);
        floodfill(i,j-1,ch);
        floodfill(i-1,j,ch);
        floodfill(i+1,j,ch);
        floodfill(i-1,j-1,ch);
        floodfill(i-1,j+1,ch);
        floodfill(i+1,j-1,ch);
        floodfill(i+1,j+1,ch);
    }
}

int main()
{
    bool blank = false;
    int test;
    cin>>test;
    cin.ignore();
    cin.ignore();

    while(test--)
    {
        if(blank) cout<<endl;
        blank = true;

        string str;
        k = -1;
        int cnt = 0;

        while(getline(cin,str))
        {
            if(str.size() == 0) break;

            if(isalpha(str[0]))
            {
                k++;

                for(int j=0; j<str.size(); j++)
                    grid[k][j] = str[j];
            }

            else
            {
                if(!cnt) k++;
                cnt++;

                memset(visit,0,sizeof(visit));

                stringstream ss(str);

                int n;
                int st,en;

                st = en = 0;
                vector<int>v;

                while(ss>>n)
                {
                    v.push_back(n);
                }

                st = v[0];
                en = v[1];

                st--,en--;
                ans = 0;

                floodfill(st,en,'W');
                cout<<ans<<endl;
            }
        }
    }

    return 0;
}
