#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,num,k=0,cnt;
    string str;

    cin>>test;
    cin.ignore();

    while(test--)
    {
        cnt=0;

        cin>>num;
        cin>>str;

        for(int i=0; i<str.size(); i++)
        {
            if(str[i]=='.')
            {
                cnt++;
                i+=2;
            }
        }

        cout<<"Case "<<++k<<": "<<cnt<<endl;
    }

    return 0;
}
