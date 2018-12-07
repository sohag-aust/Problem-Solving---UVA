#include<bits/stdc++.h>
using namespace std;

int a,b;
string *s1,*s2;

int main()
{
    int test,cs=0;
    string str;
    set<string>st;
    char ch;

    cin>>test;
    cin.ignore();

    while(test--)
    {
        cin>>a>>b;
        cin.ignore();

        s1=new string[a];
        s2=new string[b];

        for(int i=0;i<a;i++)
            getline(cin,s1[i]);

        for(int j=0;j<b;j++)
            getline(cin,s2[j]);

        cout<<"Case "<<++cs<<": ";

        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                string s;
                s=s1[i]+s2[j];
                st.insert(s);

                s.clear();
            }
        }

        cout<<st.size()<<endl;
        st.clear();
    }

    return 0;
}
