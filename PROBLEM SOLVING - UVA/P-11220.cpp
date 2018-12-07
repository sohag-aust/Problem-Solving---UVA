#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str,s,res;
    int test,sp,k,temp,cs=0;

    cin>>test;

    getline(cin,str); /// jodi prothom line e new line input nite hoi tahole eivabe likhbo..
    getline(cin,str); /// jodi prothom line e new line input nite hoi tahole eivabe likhbo..

    while(test--)
    {
        cout<<"Case #"<<++cs<<":"<<endl;

        while(getline(cin,str))
        {
            if(str.size()==0)
                break;

            res=s="";
            k=sp=0;

            for(int i=0; i<str.size(); i++)
            {
                if(isalpha(str[i]))
                {
                    s+=str[i];
                    sp=0;
                }

                if(isspace(str[i]))
                {
                    sp++;
                    temp=i;

                    if(sp==1)
                    {
                        if(s.length()>k)
                        {
                            res+=s[k];
                            k++;
                        }
                    }

                    s.clear();
                }
            }

            s.clear();

            for(int j=temp+1; j<str.size(); j++)
                s+=str[j];

            if(s.length()>k)
                res+=s[k];

            cout<<res<<endl;

            s.clear();
            res.clear();
        }

        if(test>0)
            cout<<endl;
    }

    return 0;
}

