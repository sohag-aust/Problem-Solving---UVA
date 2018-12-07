#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int test;
    cin>>test;

    while(test--)
    {
        vector<int>ans;
        int n;
        cin>>n;

        int ara[n+2];

        for(int i=0; i<n; i++) cin>>ara[i];

        int j,cnt;

        for(int i=1; i<n; i++)
        {
            int val1 = ara[i];

            j = i-1;
            cnt = 0;

            while(j >= 0)
            {
                int val2 = ara[j];

                if(val1 >= val2)
                    cnt++;

                j--;
            }

            ans.push_back(cnt);
        }

        long long sum = 0;

        for(auto i : ans)
            sum += i;

        cout<<sum<<endl;
    }

    return 0;
}

