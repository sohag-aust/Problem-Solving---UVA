#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,cs=0;
    cin>>test;

    while(test--)
    {
        int n,p,q;
        cin>>n>>p>>q;

        multiset<int>st;
        while(n--)
        {
            int grm;
            cin>>grm;
            st.insert(grm);
        }

        auto it = st.begin();
        int cnt = 0, sum = 0;

        while(it!=st.end() && cnt < p)
        {
            sum += *it;
            if(sum <= q)
                cnt++;
            else break;

            it++;
        }

        cout<<"Case "<<++cs<<": "<<cnt<<endl;
    }

    return 0;
}
