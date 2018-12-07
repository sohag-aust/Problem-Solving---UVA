#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string str,ans;

    while(cin>>n)
    {
        if(n==0) break;
        cin.ignore();

        vector<int>v;

        while(n--)
        {
            getline(cin,str);
            int len = str.size();

            ans = "";

            for(int i=0; i<len; i++)
            {
                if(!isspace(str[i]))
                {
                    ans += str[i];
                }
            }

            int sz = ans.size();
            v.push_back(sz);
        }

        sort(v.begin(),v.end());
        int szz = v.size();

        int maxi = v[szz-1];
        int sum = 0;

        for(int i=0; i<szz; i++)
        {
            sum+=(maxi-v[i]);
        }

        cout<<sum<<endl;
    }

    return 0;
}

