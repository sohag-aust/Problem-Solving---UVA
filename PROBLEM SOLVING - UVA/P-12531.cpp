#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int>mp;

    for(int i=0; i<=360; i+=6)
        mp[i]=1;

    int n;
    while(cin>>n)
    {
        if(mp[n]) cout<<"Y";
        else cout<<"N";

        cout<<endl;
    }

    return 0;
}
/**
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n%6==0)cout<<"Y";
        else cout<<"N";
        cout<<endl;
    } return 0;
}
*/
