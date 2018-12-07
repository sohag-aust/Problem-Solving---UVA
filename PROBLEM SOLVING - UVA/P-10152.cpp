#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int n;
        cin>>n;
        cin.ignore();

        vector<string>a,b,ans;
        string s;

        for(int i=0; i<n; i++)
        {
            getline(cin,s);
            a.push_back(s);
        }

        for(int i=0; i<n; i++)
        {
            getline(cin,s);
            b.push_back(s);
        }

        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());

        int i = 0,j = 0;
        while(i<n)
        {
            if(a[i] == b[j]) i++,j++;
            else i++;
        }

        for(int i=j; i<n; i++)
            cout<<b[i]<<endl;

        cout<<endl;
    }

    return 0;
}

