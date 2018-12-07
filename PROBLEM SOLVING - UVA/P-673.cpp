#include<bits/stdc++.h>
using namespace std;

int main()
{
    char st[1000];
    string str;
    int test,k,f;

    cin>>test;
    cin.ignore();

    while(test--)
    {
        getline(cin,str);
        k=0;
        f=1;

        for(int i=0; i<str.size(); i++)
        {
            if((str[i]=='(' && str[i+1]==']') || (str[i]=='[' && str[i+1]==')'))
            {
                k=-1;
                break;
            }

            else if(str[i]=='(' || str[i]=='[')
            {
                st[k]=str[i];
                k++;
            }

            else if(str[i]==' ')
                continue;

            else
            {
                k--;
                st[k]='1';
            }

            if(k<0)
                break;
        }

        for(int i=0; i<k; i++)
        {
            if(str[i]!='1')
            {
                f=0;
                break;
            }
        }

        if(f && !k)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

        memset(st,'\0',sizeof(st));
    }

    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;

#define sc scanf
#define pf printf

using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    getchar();
    while(t--)
    {
        stack<char>st;
        getline(cin,s);

        int f=0,i;

        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='('||s[i]=='[')
                st.push(s[i]);
            else if(s[i]==')' && !st.empty() && st.top()=='(')
                st.pop();
            else if(s[i]==']' && !st.empty() && st.top()=='[')
                st.pop();
            else
                f=1;
        }
        if(st.empty()&&f==0)
            pf("Yes\n");
        else
            pf("No\n");
    }
    return 0;
}

*/


















