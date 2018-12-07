#include<bits/stdc++.h>
using namespace std;

string str;
char ch;
int digit;

int main()
{
    int test;
    cin>>test;

    cin.ignore();

    while(test--)
    {
        cin>>str;

        static int cnt=1;

        cout<<"Case "<<cnt<<": ";

        for(int i=0; i<str.size(); i++)
        {
            if(isdigit(str[i]))
            {
                if(isdigit(str[i+1]))
                {
                    digit=str[i+1]-'0';
                    digit*=1;
                    digit+=(str[i]-'0')*10;
                    ch=str[i-1];

                    for(int j=0; j<digit; j++)
                        cout<<ch;

                    i++;
                }

                else
                {
                    digit=str[i]-'0';
                    ch=str[i-1];

                    for(int j=0; j<digit; j++)
                        cout<<ch;
                }
            }
        }

        cout<<endl;
        cnt++;
    }
    return 0;
}
