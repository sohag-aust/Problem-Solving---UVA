#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(cin>>n)
    {
        if(!n) break;
        int sum = 0;

        vector<int>v;

        for(int i=0;i<n;i++)
        {
            int num;
            cin>>num;
            v.push_back(num);
        }

        sort(v.begin(),v.end());

        int flag = 1;

        for(int i=0,j=i+1;j<n;i++,j++)
        {
            int diff = v[j]-v[i];

            if(diff>200)
            {
                flag = 0;
                break;
            }
        }

        sum = 1422-v[n-1];
        sum*=2;

        if(sum>200) flag = 0;

        if(flag) cout<<"POSSIBLE";
        else cout<<"IMPOSSIBLE";
        cout<<endl;
    }

    return 0;
}
