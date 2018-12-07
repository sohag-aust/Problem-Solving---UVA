#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,cs=0;
    cin>>test;

    while(test--)
    {
        string str;
        cin>>str;

        int maxi = 0;
        int len;

        for(int i=0; i<str.size(); i++)
        {
            if(str[i] == '<')
            {
                if(str[i+1] == '-' || str[i+1] == '=')
                    i++;

                len = 1;

                int flag = 0;

                if(str[i] == '-')
                {
                    while(str[i] == '-')
                    {
                        len++;
                        i++;
                    }

                    flag = 1;
                }

                else if(str[i] == '=')
                {
                    while(str[i] == '=')
                    {
                        len++;
                        i++;
                    }

                    flag = 1;
                }

                if(len > maxi)
                {
                    maxi = len;
                }

                if(flag) i--;
            }
        }

        reverse(str.begin(),str.end());

        for(int i=0; i<str.size(); i++)
        {
            if(str[i] == '>')
            {
                if(str[i+1] == '-' || str[i+1] == '=')
                    i++;

                len = 1;

                int flag = 0;

                if(str[i] == '-')
                {
                    while(str[i] == '-')
                    {
                        len++;
                        i++;
                    }

                    flag = 1;
                }

                else if(str[i] == '=')
                {
                    while(str[i] == '=')
                    {
                        len++;
                        i++;
                    }

                    flag = 1;
                }

                if(len > maxi)
                {
                    maxi = len;
                }

                if(flag) i--;
            }
        }

        cout<<"Case "<<++cs<<": ";

        (maxi == 0) ? cout<<-1 : cout<<maxi;
        cout<<endl;
    }

    return 0;
}

