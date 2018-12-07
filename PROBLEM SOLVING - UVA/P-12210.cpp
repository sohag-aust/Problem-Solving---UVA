#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b,s,cs=0;
    while(cin>>b>>s && b && s)
    {
        vector<int>bac;
        for(int i=0;i<b;i++)
        {
            int n;
            cin>>n;
            bac.push_back(n);
        }

        for(int i=0;i<s;i++)
        {
            int n;
            cin>>n;
        }

        sort(bac.begin(),bac.end());

        cout<<"Case "<<++cs<<": ";
        if(b > s)
            cout<<b-s<<" "<<bac[0];
        else
            cout<<"0";
        cout<<endl;
    }

    return 0;
}

