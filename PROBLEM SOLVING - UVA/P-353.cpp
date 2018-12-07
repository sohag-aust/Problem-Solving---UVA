#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s)
{
    int sz = s.size();

    for(int i=0,j=sz-1; i<=sz/2; i++,j--)
    {
        if(s[i] != s[j])
            return false;
    }

    return true;
}

int main()
{
    string str;

    while(cin>>str)
    {
        set<string>st;
        string temp;
        int sz = str.size();

        for(int i=0; i<sz; i++)
        {
            for(int j=sz-1; j>=0; j--)
            {
                temp = "";

                for(int k=i; k<=j; k++)
                {
                    temp += str[k];
                }

                bool eta_ki_palindrome = palindrome(temp);

                if(eta_ki_palindrome)
                {
                    if(temp.size()>0)
                        st.insert(temp);
                }
            }
        }

        if(st.size() == 1)
            cout<<"The string \'"<<str<<"\' contains "<<st.size()<<" palindrome."<<endl;
        else
            cout<<"The string \'"<<str<<"\' contains "<<st.size()<<" palindromes."<<endl;
    }

    return 0;
}

