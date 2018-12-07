#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<string>st;
    string str,s;

    while(cin>>str)
    {
        s = "";

        for(int i=0; i<str.size(); i++)
        {
            if(isalpha(str[i]))
                s += tolower(str[i]);

            else
            {
                if(s.size()>0)
                    st.insert(s);

                s = "";
            }
        }

        if(s.size()>0)
            st.insert(s);
    }

    set<string>::iterator it = st.begin();

    while(it!=st.end())
    {
        cout<<*it<<endl;
        it++;
    }

    return 0;
}
