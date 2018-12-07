#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    cin.ignore();

    string str,s;

    while(test--)
    {
        s="";
        cin>>str;

        if(str=="1" || str=="4" || str=="78") cout<<"+";
        else if(str.size()>=3)
        {
            int sz=str.size();

            s+=str[sz-1];
            s+=str[sz-2];

            reverse(s.begin(),s.end());
            if(s=="35") cout<<"-";
            else
            {
                s="";
                s+=str[0];
                s+=str[sz-1];
                if(s=="94") cout<<"*";

                else
                {
                    s="";
                    s+=str[0];
                    s+=str[1];
                    s+=str[2];
                    if(s=="190") cout<<"?";
                }
            }
        }

        cout<<endl;
    }

    return 0;
}
