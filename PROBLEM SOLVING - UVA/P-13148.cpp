
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    map<ll,bool>mp;
    ll num;

    mp[1]=true;
    mp[64]=true;
    mp[729]=true;
    mp[4096]=true;
    mp[15625]=true;
    mp[46656]=true;
    mp[117649]=true;
    mp[262144]=true;
    mp[531441]=true;
    mp[1000000]=true;
    mp[1771561]=true;
    mp[2985984]=true;
    mp[4826809]=true;
    mp[7529536]=true;
    mp[11390625]=true;
    mp[16777216]=true;
    mp[24137569]=true;
    mp[34012224]=true;
    mp[47045881]=true;
    mp[64000000]=true;
    mp[85766121]=true;

    while(cin>>num)
    {
        if(num==0)
            break;

        if(mp[num])
            cout<<"Special"<<endl;
        else
            cout<<"Ordinary"<<endl;
    }

    return 0;
}
