#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        map<int,int>mp1,mp2;
        set<int>st;

        int n,m;
        cin>>n>>m;

        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            mp1[k]++;
            st.insert(k);
        }

        for(int i=0;i<m;i++)
        {
            int k;
            cin>>k;
            mp2[k]++;
            st.insert(k);
        }

        set<int>::iterator it = st.begin();
        int sum = 0;

        while(it != st.end())
        {
            int val = *it;

            if(mp1[val] && !mp2[val])
                sum += mp1[val];

            else if(!mp1[val] && mp2[val])
                sum += mp2[val];

            else if(mp1[val] != mp2[val])
                sum += max(mp1[val],mp2[val]) - min(mp1[val],mp2[val]);

            it++;
        }

        cout<<sum<<endl;
    }

    return 0;
}
