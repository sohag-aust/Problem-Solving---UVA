#include<bits/stdc++.h>
using namespace std;

map<string,int>mp;
string str1,str2;
int test,num,day,D;

int main()
{
    cin>>test;
    while(test--)
    {
        static int cnt=1;

        cin>>num;
        cin.ignore();

        while(num--)
        {
            cin>>str1>>day;
            mp[str1]=day;
        }

        cin>>D;
        cin>>str2;

        if(mp[str2]==0 || mp[str2]>(D+5))
            cout<<"Case "<<cnt<<": "<<"Do your own homework!"<<endl;

        else if(mp[str2]!=0)
        {
            if(mp[str2]<=D)
                cout<<"Case "<<cnt<<": "<<"Yesss"<<endl;

            else if(mp[str2]>D && mp[str2]<=(D+5))
                cout<<"Case "<<cnt<<": "<<"Late"<<endl;
        }

        cnt++;
        mp.clear();
    }

    return 0;
}

