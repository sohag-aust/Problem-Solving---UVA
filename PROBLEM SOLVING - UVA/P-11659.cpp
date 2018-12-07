#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,a;

    while(cin>>i>>a)
    {
        map<int,bool>mp;
        if(!i && !a) break;
        while(a--)
        {
            int x,y;
            cin>>x>>y;

            if(y<0)
            {
                y=(-1)*y;
                mp[y]=true;
            }

            else
            {
                if(!mp[y])
                    mp[y]=false;
            }
        }
        int cnt=0;
        for(int j=1;j<=i;j++)
        {
            if(!mp[j]) cnt++;
        }
        cout<<cnt<<endl;
    }

    return 0;
}

