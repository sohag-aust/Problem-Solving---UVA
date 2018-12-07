#include<bits/stdc++.h>
using namespace std;

map<string,int>mp;
int val=1;

void init()
{
    string s = "";

    for(char ch = 'a' ; ch<='z' ; ch++)
    {
        s = "";
        s += ch;

        mp[s] = val;
        val++;
    }

    /// 2

    for(char ch = 'a' ; ch<='z' ; ch++)
    {
        char c = ch;
        c++;

        for(char ch1 = c ; ch1<='z' ; ch1++)
        {
            s = "";
            s += ch;
            s += ch1;

            mp[s] = val;
            val++;
        }
    }

    /// 3


    for(char ch = 'a' ; ch<='z' ; ch++)
    {
        char c = ch;
        c++;

        for(char ch1 = c ; ch1<='z' ; ch1++)
        {
            char c1 = ch1;
            c1++;

            for(char ch2 = c1 ; ch2<='z' ; ch2++)
            {
                s = "";
                s += ch;
                s += ch1;
                s += ch2;

                mp[s] = val;
                val++;
            }
        }
    }

    /// 4


    for(char ch = 'a' ; ch<='z' ; ch++)
    {
        char c = ch;
        c++;

        for(char ch1 = c ; ch1<='z' ; ch1++)
        {
            char c1 = ch1;
            c1++;

            for(char ch2 = c1 ; ch2<='z' ; ch2++)
            {
                char c2 = ch2;
                c2++;

                for(char ch3 = c2 ; ch3<='z' ; ch3++)
                {
                    s = "";
                    s += ch;
                    s += ch1;
                    s += ch2;
                    s += ch3;

                    mp[s] = val;
                    val++;
                }
            }
        }
    }

    /// 5

    for(char ch = 'a' ; ch<='z' ; ch++)
    {
        char c = ch;
        c++;

        for(char ch1 = c ; ch1<='z' ; ch1++)
        {
            char c1 = ch1;
            c1++;

            for(char ch2 = c1 ; ch2<='z' ; ch2++)
            {
                char c2 = ch2;
                c2++;

                for(char ch3 = c2 ; ch3<='z' ; ch3++)
                {
                    char c3 = ch3;
                    c3++;

                    for(char ch4 = c3 ; ch4<='z' ; ch4++)
                    {
                        s = "";
                        s += ch;
                        s += ch1;
                        s += ch2;
                        s += ch3;
                        s += ch4;

                        mp[s] = val;
                        val++;
                    }
                }
            }
        }
    }
}

int main()
{
    init();

    string str;

    while(cin>>str)
    {
        cout<<mp[str]<<endl;
    }

    return 0;
}

