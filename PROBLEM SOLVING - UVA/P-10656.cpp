#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(cin>>n && n)
    {
        vector<int>v;

        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;

            if(a) v.push_back(a);
        }

        if(v.size() == 0) cout<<"0"<<endl;

        else
        {
            for(int i=0; i<v.size(); i++)
            {
                if(i==v.size()-1) cout<<v[i]<<endl;
                else cout<<v[i]<<" ";
            }
        }
    }

    return 0;
}
