#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        int tot = a + b;
        int ans = 0;

        while(tot >= c)
        {
            ans += tot/c;
            tot = tot/c + tot%c;
        }

        cout<<ans<<endl;
    }

    return 0;
}
