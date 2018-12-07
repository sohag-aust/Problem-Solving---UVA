/// THIS IS VERY IMPORTANT DIGIT SPLIT PROBLEM...

#include<bits/stdc++.h>
using namespace std;

bool visit[100];

void init()
{
    for(int i='a'; i<='z'; i++)
        visit[i]=true;

    for(int i='A'; i<='Z'; i++)
        visit[i]=true;

    visit[32]=true;
    visit[33]=true;
    visit[44]=true;
    visit[46]=true;
    visit[58]=true;
    visit[59]=true;
    visit[63]=true;
}

int main()
{
    string str;

    init();

    while(getline(cin,str))
    {
        int len=str.size();

        if(isdigit(str[0]))
        {
            int temp=0;

            for(int i=len-1; i>=0; i--)
            {
                int val=str[i]-'0';

                temp=temp*10+val; /// digit split

                if(visit[temp])
                {
                    cout<<(char)temp;
                    temp=0;
                }
            }
        }

        else
        {
            for(int i=len-1; i>=0; i--)
            {
                int val=(int)str[i];
                if(str[i]=='d')
                    cout<<"001";
                else if(str[i]=='x')
                    cout<<"021";
                else if(str[i]=='F')
                    cout<<"07";
                else if(str[i]=='P')
                    cout<<"08";
                else if(str[i]=='Z')
                    cout<<"09";
                else if(str[i]=='n')
                    cout<<"011";
                else
                {
                    while(val!=0)
                    {
                        int mod=val%10;
                        cout<<mod;
                        val/=10;
                    }
                }
            }
        }

        cout<<endl;
    }

    return 0;
}

