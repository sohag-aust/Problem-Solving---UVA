#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,val,val1,diff,cnt;
    string s1,s2;
    map<string,int>mp;

    cin>>test;
    cin.ignore();

    mp["SUN"]=1;
    mp["MON"]=2;
    mp["TUE"]=3;
    mp["WED"]=4;
    mp["THU"]=5;
    mp["FRI"]=6;
    mp["SAT"]=7;

    while(test--)
    {
        cin>>s1>>s2;
        cnt=0;

        val=mp[s2];
        val1=mp["FRI"];

        diff=abs(val-val1);
        diff++;

        if(s1=="JAN" || s1=="MAR" || s1=="MAY" || s1=="JUL" || s1=="AUG" || s1=="OCT" || s1=="DEC")
        {
            while(diff<=30)
            {
                cnt+=2;
                diff+=7;
            }

            if(diff==31)
                cout<<cnt+1<<endl;
            else if(s2=="SAT" )
                cout<<cnt-1<<endl;
            else
                cout<<cnt<<endl;
        }

        else if(s1=="FEB")
        {
            while(diff<=27)
            {
                cnt+=2;
                diff+=7;
            }

            if(diff==28)
                cout<<cnt+1<<endl;
            else
                cout<<cnt<<endl;
        }

        else if(s1=="APR" || s1=="JUN" || s1=="SEP" || s1=="NOV")
        {
            while(diff<=29)
            {
                cnt+=2;
                diff+=7;
            }

            if(diff==30)
                cout<<cnt+1<<endl;
            else
                cout<<cnt<<endl;
        }
    }

    return 0;
}
