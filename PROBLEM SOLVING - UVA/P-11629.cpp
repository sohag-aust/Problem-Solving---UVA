#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p,q;
    map<string,int>mp;
    string s;

    cin>>p>>q;

    while(p--)
    {
        int d,d1,d2;

        cin>>s;
        scanf("%d.%d",&d1,&d2);

        d = d1*10 + d2;
        mp[s] = d;
    }

    int cs = 0;

    while(q--)
    {
        string condition = "";
        int sum = 0;

        while(true)
        {
            cin>>s;

            if(s == "+") continue;

            sum += mp[s];

            if(s == "=")
            {
                condition += "=";
                break;
            }

            else if(s == ">")
            {
                condition += ">";
                break;
            }

            else if(s == "<")
            {
                condition += "<";
                break;
            }

            else if(s == ">=")
            {
                condition += ">=";
                break;
            }

            else if(s == "<=")
            {
                condition += "<=";
                break;
            }
        }

        int value;
        cin>>value;

        value *= 10;

        int flag = 0;

        if(condition == "=")
        {
            if(sum == value)
            {
                cout<<"Guess #"<<++cs<<" was correct.";
                flag = 1;
            }
        }

        if(condition == "<")
        {
            if(sum < value)
            {
                cout<<"Guess #"<<++cs<<" was correct.";
                flag = 1;
            }
        }

        if(condition == ">")
        {
            if(sum > value)
            {
                cout<<"Guess #"<<++cs<<" was correct.";
                flag = 1;
            }
        }

        if(condition == "<=")
        {
            if(sum <= value)
            {
                cout<<"Guess #"<<++cs<<" was correct.";
                flag = 1;
            }
        }

        if(condition == ">=")
        {
            if(sum >= value)
            {
                cout<<"Guess #"<<++cs<<" was correct.";
                flag = 1;
            }
        }

        if(!flag)
            cout<<"Guess #"<<++cs<<" was incorrect.";

        cout<<endl;
    }

    return 0;
}
