#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    string str;

    cin>>test;
    cin.ignore();

    while(test--)
    {
        static int cs = 0;

        getline(cin,str);

        string s = "";

        for(int i=0; i<str.size(); i++)
        {
            if(isalpha(str[i]))
                s += str[i];
        }

        int sz = s.size();
        double _sq = sqrt((double)sz);
        int sq = (int)_sq;

        cout<<"Case #"<<++cs<<":"<<endl;

        if(sq*sq == sz)
        {
            int flag = 1;

            for(int i=0,j=sz-1; i<sz/2; i++,j--)
            {
                if(s[i]!=s[j])
                {
                    flag = 0;
                    break;
                }
            }

            if(flag)
                cout<<sq;

            else
                cout<<"No magic :(";
        }

        else
            cout<<"No magic :(";

        cout<<endl;
    }

    return 0;
}

