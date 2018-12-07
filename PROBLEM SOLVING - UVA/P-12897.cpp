/// SO IMPORTANT MAPPING PROBLEM..

#include<bits/stdc++.h>
using namespace std;

///map<char,int>ind;
string str,temp;
int ind[30];

void init()
{
    temp = "";

    for(char ch='A'; ch<='Z'; ch++)
    {
        temp += ch;
        ind[ch-65] = ch-65;
    }
}

int main()
{
    init();

    int test;
    cin>>test;

    while(test--)
    {
        str = temp;

        string s;
        cin>>s;

        int n;
        cin>>n;

        while(n--)
        {
            char ch1,ch2;
            cin>>ch1>>ch2;

            for(int i=0;str[i];i++)
            {
                if(str[i] == ch2)
                    str[i] = ch1;
            }
        }

        for(int i=0;s[i];i++)
        {
            if(s[i] == '_')
            {
                cout<<s[i];
                continue;
            }

            int index = ind[s[i]-65];
            cout<<str[index];
        }

        cout<<endl;
    }

    return 0;
}

