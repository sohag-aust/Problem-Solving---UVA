#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int l,n;
        cin>>l>>n;

        int ef = 0, lf = 0;
        int st = 0, lt = l;

        while(n--)
        {
            int val;
            cin>>val;

            int a = val - st;
            int b = lt - val;

            ef = max(ef,min(a,b));
            lf = max(lf,max(a,b));
        }

        cout<<ef<<" "<<lf<<endl;
    }

    return 0;
}

