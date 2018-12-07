#include<bits/stdc++.h>
using namespace  std;

int main()
{
    int test,cs=0;
    cin>>test;

    while(test--)
    {
        int row,col,high,low;
        cin>>row>>col>>high>>low;

        char ch[row+5][col+5];

        map<char,int>mp;
        int sum,maxi;

        sum = maxi = 0;

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                cin>>ch[i][j];
                mp[ch[i][j]]++;
                maxi = max(maxi,mp[ch[i][j]]);
            }
        }

        for(auto &x:mp)
        {
            if(x.second == maxi)
                sum += (maxi * high);

            else
                sum += (x.second * low);
        }

        cout<<"Case "<<++cs<<": "<<sum<<endl;
    }

    return 0;
}

