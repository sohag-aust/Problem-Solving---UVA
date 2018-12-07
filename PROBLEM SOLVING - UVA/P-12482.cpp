#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    string str[1010],temp;
    int n,l,c;
    int character,page,line;

    while(cin>>n>>l>>c)
    {
        character = 0;
        page = 1;
        line = 1;

        for(int i=0; i<n; i++)
            cin>>str[i];

        temp = str[0];

        character += temp.size();

        for(int i=1; i<n; i++)
        {
            character++;

            temp = str[i];
            int sz = temp.size();

            if(character + sz > c)
            {
                line++;
                character = temp.size();
            }

            else character += sz;

            if(line > l)
            {
                page++;
                line = 1;
            }
        }

        cout<<page<<endl;
    }

    return 0;
}

