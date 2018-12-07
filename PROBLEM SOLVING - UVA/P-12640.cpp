#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    vector<ll>v;
    string str;

    while(getline(cin,str))
    {
        stringstream ss(str);
        ll num;

        while(ss>>num)
        {
            v.push_back(num);
        }

        ll sum,maxi;
        sum=maxi=0;

        for(int i=0; i<v.size(); i++)
        {
            sum+=v[i];

            if(sum<=0) sum=0;

            else maxi=max(sum,maxi);
        }

        cout<<maxi<<endl;
        v.clear();
    }
}

