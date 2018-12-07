#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    int f,val;
    string s;

    while(cin>>s)
    {
        f=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='B' || s[i]=='F' || s[i]=='P' || s[i]=='V')
                v.push_back(1);
            else if(s[i]=='C' || s[i]=='G' || s[i]=='J' || s[i]=='K' || s[i]=='Q' || s[i]=='S' || s[i]=='X' || s[i]=='Z')
                v.push_back(2);
            else if(s[i]=='D' || s[i]=='T')
                v.push_back(3);
            else if(s[i]=='L')
                v.push_back(4);
            else if(s[i]=='M' || s[i]=='N')
                v.push_back(5);
            else if(s[i]=='R')
                v.push_back(6);
            else
                v.push_back(0);
        }

        for(int i=0; i<v.size(); )
        {
            val=v[i];

            if(val)
                cout<<val;

            if(!f)
                i++;
            else
            {
                i--;
                f=0;
            }

            while(v[i]==val)
                i++;
        }
        cout<<endl;

        v.clear();
    }
}
