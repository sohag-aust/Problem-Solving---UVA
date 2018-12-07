#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        static int cs = 0;

        int wife_sh,wife_sm,wife_eh,wife_em;
        int metting_sh,metting_sm,metting_eh,metting_em;

        scanf("%d:%d %d:%d",&wife_sh,&wife_sm,&wife_eh,&wife_em);
        scanf("%d:%d %d:%d",&metting_sh,&metting_sm,&metting_eh,&metting_em);

        int wife_start = (wife_sh * 60) + wife_sm;
        int wife_end = (wife_eh * 60) + wife_em;

        int metting_start = (metting_sh * 60) + metting_sm;
        int metting_end = (metting_eh * 60) + metting_em;

        cout<<"Case "<<++cs<<": ";

        if( (wife_start < metting_start && wife_end < metting_start) || (wife_start > metting_end && wife_end > metting_end) )
            cout<<"Hits Meeting";

        else
            cout<<"Mrs Meeting";

        cout<<endl;
    }

    return 0;
}

