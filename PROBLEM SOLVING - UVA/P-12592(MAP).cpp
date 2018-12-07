#include<bits/stdc++.h>
using namespace std;

string s1,s2,s3;
map<string,string>mp;
int test,num,k;

int main()
{
    k=0;
    cin>>test;
    cin.ignore();

    while(test--)
    {
        getline(cin,s1);
        getline(cin,s2);

        mp[s1]=s2;
    }

    cin>>num;
    cin.ignore();

    while(num--)
    {
        getline(cin,s3);
        cout<<mp[s3]<<endl;
    }

    EXIT_SUCCESS;
}
