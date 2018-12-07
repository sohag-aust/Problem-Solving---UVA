#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,diff;

    while(cin>>a>>b)
    {
        if(a==-1 && b==-1)
            break;

        diff=abs(b-a);

        if(diff>50)
            cout<<100-diff<<endl;
        else
            cout<<diff<<endl;
    }

    EXIT_SUCCESS;
}
