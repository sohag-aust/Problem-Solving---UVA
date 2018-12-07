#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    vector<string>v;

    int maxi = 0;

    while(getline(cin,str))
    {
        v.push_back(str);

        int len = str.size();

        if(len>maxi) maxi = len;
    }

    int sz = v.size();

    char ara[sz+2][maxi+2];

    int cnt = sz-1;

    for(int i=0; i<sz; i++)
    {
        string s = v[cnt];

        int l = s.size();
        int k = 0;

        for(int j=0; j<maxi; j++)
        {
            if(k<l)
                ara[i][j] = s[k++];

            else
                ara[i][j] = ' ';
        }

        cnt--;
    }

    for(int i=0; i<maxi; i++)
    {
        for(int j=0; j<sz; j++)
        {
            cout<<ara[j][i];
        }
        cout<<endl;
    }

    return 0;
}

