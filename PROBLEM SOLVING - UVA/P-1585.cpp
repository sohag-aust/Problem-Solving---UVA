#include<bits/stdc++.h>
using namespace std;

string str;
int test;
int sum,x;

int main()
{
    cin>>test;
    cin.ignore();

    while(test--)
    {
        sum=x=0;
        cin>>str;

        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='O')
            {
                x++;
                sum+=x;
            }
            else
                x=0;
        }
        cout<<sum<<endl;
    }

    EXIT_SUCCESS;
}
