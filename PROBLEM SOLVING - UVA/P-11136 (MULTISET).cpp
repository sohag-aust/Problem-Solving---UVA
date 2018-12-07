#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    while(cin>>n && n)
    {
        multiset<int>mst;
        ll sum = 0;

        while(n--)
        {
            int k;
            cin>>k;

            while(k--)
            {
                int val;
                cin>>val;
                mst.insert(val);
            }

            auto it_fast = mst.begin();
            auto it_last = mst.rbegin();

            sum += *it_last - *it_fast;

            mst.erase(mst.begin());
            mst.erase(prev(mst.end()));
        }

        cout<<sum<<endl;
    }

    return 0;
}

