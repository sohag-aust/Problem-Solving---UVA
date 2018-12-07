#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<char,int>mp;
    string str;
    char ch;
    int test;
    int k,val,m,sum;
    double res;

    cin>>test;

    while(test--)
    {
        sum=0;
        cin>>k;

        while(k--)
        {
            cin>>ch>>val;
            mp[ch]=val;
        }

        cin>>m;
        cin.ignore();

        while(m--)
        {
            getline(cin,str);

            for(int i=0; i<str.size(); i++)
            {
                sum+=mp[str[i]];
            }

        }

        res=(double)sum/(double)100;

        printf("%.2lf$\n", res);

        mp.clear();

    }

    return 0;
}


