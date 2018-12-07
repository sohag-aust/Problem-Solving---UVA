#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int sum,len,k;

    while(getline(cin,str))
    {
        k=sum=0;
        len=str.size();

        for(int i=0; i<len; i++)
        {
            if(isdigit(str[i]))
            {
                k=str[i]-'0';
                sum+=k;
            }

            else if(isalpha(str[i]) || str[i]=='*')
            {
                if(str[i]=='b')
                {
                    for(int j=0; j<sum; j++)
                        cout<<" ";
                }

                else
                {
                    for(int j=0; j<sum; j++)
                        cout<<str[i];
                }

                sum=0;
            }

            else if(str[i]=='!' )
                cout<<endl;
        }

        cout<<endl;
    }

    return 0;
}

