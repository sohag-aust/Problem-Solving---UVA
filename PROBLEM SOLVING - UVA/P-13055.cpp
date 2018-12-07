#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<string>st;
    string str,s;
    int test;

    cin>>test;
    cin.ignore();

    while(test--)
    {
        cin>>str;

        if(str=="Sleep")
        {
            cin>>s;
            st.push(s);
        }

        else if(str=="Test" && !st.empty())
        {
            cout<<st.top()<<endl;
        }

        else if(str=="Kick" && !st.empty())
        {
            st.pop();
        }

        else if(str=="Test" && st.empty())
        {
            cout<<"Not in a dream"<<endl;
        }
    }

    return 0;
}
