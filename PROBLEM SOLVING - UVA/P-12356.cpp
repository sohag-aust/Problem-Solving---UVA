#include<bits/stdc++.h>
using namespace std;

#define left first
#define right second

int main()
{
    int n,q;

    while(cin>>n>>q)
    {
        if(!n && !q) break;

        map<int,pair<int,int> >mp;

        for(int i=1; i<=n; i++)
        {
            mp[i].left = ((i-1 == 0) ? 0:i-1);
            mp[i].right = ((i+1 > n) ? 0:i+1);
        }

        while(q--)
        {
            int a,b;
            cin>>a>>b;

            int _left = mp[a].left;
            int _right = mp[b].right;

            if(_left == 0) cout<<"* ";
            else cout<<_left<<" ";

            if(_right == 0) cout<<"*";
            else cout<<_right;
            cout<<endl;

            mp[_left].left = mp[_left].left;
            mp[_left].right = _right;

            mp[_right].left = _left;
            mp[_right].right = mp[_right].right;
        }

        cout<<"-"<<endl;
    }

    return 0;
}
