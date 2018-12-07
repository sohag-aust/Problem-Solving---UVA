#include<bits/stdc++.h>
using namespace std;

#define maxi 200

int f,s;
char first[maxi+2][maxi+2];
char second[maxi+2][maxi+2];
char temp[maxi+2][maxi+2];

int _search()
{
    int k,l;
    k = l = 0;
    int cnt = 0;

    while(k < f)
    {
        string str = "";

        for(int m = 0; m<f; m++)
        {
            for(int i=k; i<s+k; i++)
            {
                for(int j=l; j<s+l; j++)
                {
                    if(s+l > f) break;
                    str += first[i][j];
                }

                if(s+l > f) break;
            }

            int cs = -1;
            int flag = 1;

            for(int i=0; i<s; i++)
            {
                for(int j=0; j<s; j++)
                {
                    if(str[++cs] != second[i][j])
                    {
                        flag = 0;
                        break;
                    }
                }

                if(!flag) break;
            }

            if(flag) cnt++;

            str = "";
            l++;

            if(s+l > f) break;
        }

        k++;
        l = 0;
    }

    return cnt;
}

void _rotate() /// for each rotation every column will be converted to a row...
{
    int row = s-1;
    int col = 0;
    int cnt = 0;
    int i=0,j=0;

    while(cnt < s)
    {
        temp[i][j] = second[row][col];
        row--;
        j++;

        if(row < 0)
        {
            row = s-1;
            col++;
            j = 0;
            cnt++;
            i++;
        }
    }

    for(int i=0; i<s; i++)
        for(int j=0; j<s; j++)
            second[i][j] = temp[i][j];
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);

    while(cin>>f>>s)
    {
        if(!f && !s) break;

        memset(first,0,sizeof(first));
        memset(second,0,sizeof(second));
        memset(temp,0,sizeof(temp));

        for(int i=0; i<f; i++)
            for(int j=0; j<f; j++)
                cin>>first[i][j];

        for(int i=0; i<s; i++)
            for(int j=0; j<s; j++)
                cin>>second[i][j];

        for(int i=0; i<4; i++)
        {
            int res = _search();

            if(i == 4-1) cout<<res;
            else cout<<res<<" ";

            _rotate();
        }

        cout<<endl;
    }

    return 0;
}

